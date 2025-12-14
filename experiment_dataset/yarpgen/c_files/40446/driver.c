#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37177;
short var_4 = (short)-19100;
unsigned long long int var_8 = 17028989598054548704ULL;
short var_10 = (short)31191;
short var_16 = (short)221;
long long int var_18 = 6066960643609216518LL;
int zero = 0;
short var_20 = (short)-30198;
long long int var_21 = 5682011889709896920LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
