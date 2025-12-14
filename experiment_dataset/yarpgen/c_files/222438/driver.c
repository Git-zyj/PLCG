#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6597377743088909569ULL;
short var_1 = (short)-25802;
unsigned long long int var_3 = 2883508024867390477ULL;
short var_7 = (short)-2614;
unsigned long long int var_8 = 16963837366661718263ULL;
unsigned long long int var_9 = 17131513659054713831ULL;
short var_12 = (short)20551;
unsigned long long int var_14 = 11314722122010945157ULL;
int zero = 0;
unsigned long long int var_15 = 7995894486297069487ULL;
short var_16 = (short)-27268;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
