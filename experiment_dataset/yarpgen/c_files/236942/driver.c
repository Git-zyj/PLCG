#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3340539944U;
unsigned short var_3 = (unsigned short)30685;
unsigned short var_5 = (unsigned short)53180;
unsigned char var_6 = (unsigned char)77;
int var_11 = -1079326884;
int zero = 0;
int var_16 = 179887845;
unsigned short var_17 = (unsigned short)5931;
signed char var_18 = (signed char)127;
int var_19 = 2050900235;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
