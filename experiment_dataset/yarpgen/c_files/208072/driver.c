#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3209499097076049274LL;
unsigned char var_3 = (unsigned char)101;
unsigned long long int var_6 = 6687258926594363055ULL;
unsigned long long int var_7 = 10616962509332746835ULL;
int var_8 = 1014317535;
_Bool var_11 = (_Bool)0;
int var_12 = -2018878714;
int zero = 0;
signed char var_13 = (signed char)86;
long long int var_14 = 1698672023592785579LL;
unsigned int var_15 = 1709892802U;
unsigned int var_16 = 1391593236U;
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
