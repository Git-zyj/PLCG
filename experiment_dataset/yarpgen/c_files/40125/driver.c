#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)85;
unsigned short var_6 = (unsigned short)49640;
unsigned int var_7 = 1475457355U;
_Bool var_13 = (_Bool)1;
long long int var_14 = -3826192935685684017LL;
long long int var_15 = 5849689497221812234LL;
unsigned char var_16 = (unsigned char)244;
int zero = 0;
long long int var_17 = -7072714403461527431LL;
long long int var_18 = -5879674497227614972LL;
unsigned char var_19 = (unsigned char)110;
signed char var_20 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
