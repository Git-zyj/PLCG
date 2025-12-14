#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3160161446U;
signed char var_5 = (signed char)-103;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3557381377U;
int var_9 = -1674084018;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)19194;
signed char var_14 = (signed char)-90;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)44;
signed char var_17 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
