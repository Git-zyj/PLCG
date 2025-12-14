#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7511583551142222516ULL;
unsigned char var_3 = (unsigned char)66;
unsigned int var_6 = 1123274675U;
long long int var_7 = 8625678005715969746LL;
_Bool var_11 = (_Bool)1;
short var_15 = (short)5762;
int var_16 = 598061763;
long long int var_17 = 8965355126807184733LL;
unsigned int var_18 = 190331723U;
unsigned short var_19 = (unsigned short)54918;
int zero = 0;
unsigned char var_20 = (unsigned char)21;
signed char var_21 = (signed char)-39;
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
