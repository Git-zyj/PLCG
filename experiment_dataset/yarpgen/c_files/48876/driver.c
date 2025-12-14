#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 904460065;
long long int var_6 = -8256301976322965201LL;
short var_12 = (short)-11544;
unsigned char var_13 = (unsigned char)85;
unsigned long long int var_14 = 13200818699434421683ULL;
long long int var_15 = 536219571406964557LL;
short var_16 = (short)-29714;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-61;
long long int var_20 = 981549348419173469LL;
unsigned short var_21 = (unsigned short)9865;
unsigned char var_22 = (unsigned char)44;
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
