#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1904621912;
long long int var_1 = -5395766161571594774LL;
unsigned long long int var_2 = 5636044902944893163ULL;
unsigned short var_3 = (unsigned short)9987;
unsigned char var_4 = (unsigned char)214;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)1401;
unsigned long long int var_7 = 3686587531868799074ULL;
short var_8 = (short)24251;
int zero = 0;
unsigned short var_12 = (unsigned short)7122;
unsigned short var_13 = (unsigned short)5016;
unsigned long long int var_14 = 2022279986827207456ULL;
unsigned int var_15 = 1965813981U;
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
