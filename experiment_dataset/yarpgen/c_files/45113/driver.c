#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21396;
unsigned short var_1 = (unsigned short)14209;
unsigned int var_3 = 2644442393U;
short var_11 = (short)-28171;
long long int var_14 = 141163473519715067LL;
int zero = 0;
int var_19 = -1779393479;
short var_20 = (short)-30598;
unsigned short var_21 = (unsigned short)29790;
signed char var_22 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
