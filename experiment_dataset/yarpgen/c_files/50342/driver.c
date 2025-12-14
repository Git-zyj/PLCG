#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43338;
int var_3 = -1044158572;
signed char var_5 = (signed char)-85;
unsigned short var_9 = (unsigned short)65327;
signed char var_10 = (signed char)86;
unsigned int var_11 = 1920386156U;
unsigned long long int var_12 = 9779372683911278682ULL;
unsigned int var_13 = 951618423U;
long long int var_16 = 6384652675393865446LL;
short var_19 = (short)2999;
int zero = 0;
short var_20 = (short)-16563;
unsigned int var_21 = 677590398U;
int var_22 = 1653010865;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
