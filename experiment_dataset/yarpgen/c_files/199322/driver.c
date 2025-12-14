#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7872978395523423747LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -8511821604904600667LL;
short var_4 = (short)-23558;
int var_5 = 909307320;
signed char var_7 = (signed char)-7;
unsigned int var_9 = 4148907675U;
unsigned int var_11 = 3019229132U;
short var_12 = (short)25904;
int zero = 0;
unsigned char var_14 = (unsigned char)109;
unsigned char var_15 = (unsigned char)227;
unsigned int var_16 = 2911427051U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
