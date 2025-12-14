#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13486;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 190728399U;
int var_3 = 1066152054;
unsigned int var_5 = 196706359U;
unsigned short var_6 = (unsigned short)51703;
unsigned char var_7 = (unsigned char)22;
unsigned short var_8 = (unsigned short)61378;
unsigned int var_9 = 1273667621U;
int zero = 0;
short var_12 = (short)-9625;
signed char var_13 = (signed char)123;
unsigned int var_14 = 3794981519U;
unsigned long long int var_15 = 17636081680763753018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
