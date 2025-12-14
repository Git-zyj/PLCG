#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3953604532U;
unsigned char var_2 = (unsigned char)196;
short var_5 = (short)-30617;
int var_7 = 361382947;
signed char var_8 = (signed char)70;
unsigned short var_9 = (unsigned short)7534;
short var_10 = (short)-12373;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)40454;
int zero = 0;
unsigned char var_13 = (unsigned char)254;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
