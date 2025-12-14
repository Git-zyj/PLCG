#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15143234898251240436ULL;
signed char var_5 = (signed char)106;
short var_6 = (short)10592;
unsigned short var_7 = (unsigned short)11802;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 11025084747118895252ULL;
unsigned long long int var_13 = 8107395505180708311ULL;
int zero = 0;
int var_15 = 1698718875;
unsigned int var_16 = 1572564150U;
unsigned long long int var_17 = 2400448566620614394ULL;
short var_18 = (short)-13270;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
