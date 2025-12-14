#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -754763161;
long long int var_8 = 709652949749893722LL;
unsigned long long int var_12 = 6169425603418565291ULL;
unsigned int var_14 = 2714827647U;
long long int var_18 = -2996104432141562868LL;
int zero = 0;
unsigned char var_19 = (unsigned char)39;
short var_20 = (short)2372;
unsigned short var_21 = (unsigned short)8453;
short var_22 = (short)-23779;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
