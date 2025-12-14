#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)36;
signed char var_2 = (signed char)-13;
long long int var_7 = 2657646087625949783LL;
long long int var_8 = 1347119407095227125LL;
int var_11 = 228220270;
long long int var_13 = 2264873992445150797LL;
unsigned char var_14 = (unsigned char)71;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)61207;
short var_19 = (short)-31797;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -332635541;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
