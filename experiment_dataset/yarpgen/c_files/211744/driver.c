#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29401;
int var_2 = -1732200663;
signed char var_3 = (signed char)-79;
short var_6 = (short)11723;
unsigned short var_10 = (unsigned short)5110;
int zero = 0;
unsigned char var_13 = (unsigned char)254;
unsigned int var_14 = 940115766U;
unsigned short var_15 = (unsigned short)13044;
unsigned int var_16 = 26680497U;
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
