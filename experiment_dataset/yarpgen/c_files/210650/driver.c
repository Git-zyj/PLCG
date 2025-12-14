#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3324638800241773354ULL;
unsigned short var_2 = (unsigned short)46585;
unsigned long long int var_3 = 5262177657402639894ULL;
int zero = 0;
signed char var_10 = (signed char)-55;
unsigned char var_11 = (unsigned char)107;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
