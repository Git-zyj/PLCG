#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4006115111U;
short var_3 = (short)-20572;
short var_5 = (short)6585;
unsigned int var_6 = 1421741931U;
unsigned int var_7 = 3315210303U;
unsigned int var_8 = 3370674694U;
unsigned int var_9 = 2030191571U;
signed char var_10 = (signed char)21;
unsigned int var_13 = 3316806231U;
unsigned char var_14 = (unsigned char)93;
unsigned short var_16 = (unsigned short)38308;
int zero = 0;
long long int var_17 = -4446097606373280564LL;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
