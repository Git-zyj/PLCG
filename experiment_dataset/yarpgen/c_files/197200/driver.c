#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23076;
unsigned short var_1 = (unsigned short)8306;
unsigned char var_9 = (unsigned char)157;
unsigned long long int var_11 = 17053379750005476204ULL;
unsigned char var_13 = (unsigned char)196;
unsigned long long int var_14 = 17189644234347814190ULL;
unsigned long long int var_16 = 18244813237400627602ULL;
short var_18 = (short)-28097;
int zero = 0;
unsigned short var_19 = (unsigned short)61909;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
