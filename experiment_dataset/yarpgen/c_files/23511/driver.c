#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1089599768U;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)15;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 2784039168U;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)22985;
int zero = 0;
signed char var_14 = (signed char)108;
unsigned short var_15 = (unsigned short)17729;
unsigned char var_16 = (unsigned char)86;
unsigned char var_17 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
