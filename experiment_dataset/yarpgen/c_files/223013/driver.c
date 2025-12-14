#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-65;
int var_4 = 136579658;
unsigned int var_5 = 1765867662U;
unsigned long long int var_7 = 2688601190841659927ULL;
short var_8 = (short)22861;
signed char var_12 = (signed char)58;
unsigned short var_14 = (unsigned short)6202;
unsigned int var_15 = 2142837038U;
unsigned char var_16 = (unsigned char)147;
int zero = 0;
unsigned long long int var_17 = 1534650227163583085ULL;
long long int var_18 = -7176803961382058664LL;
int var_19 = 2097354190;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
