#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4087894713U;
unsigned int var_1 = 1459048219U;
unsigned long long int var_3 = 7416216498647520549ULL;
short var_4 = (short)-21605;
unsigned short var_5 = (unsigned short)60357;
unsigned long long int var_7 = 16857005566304467206ULL;
short var_9 = (short)-8842;
signed char var_10 = (signed char)-92;
int zero = 0;
long long int var_11 = -3688794165374769989LL;
unsigned short var_12 = (unsigned short)22634;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
