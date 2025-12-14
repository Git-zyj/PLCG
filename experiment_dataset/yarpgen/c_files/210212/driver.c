#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)19980;
_Bool var_4 = (_Bool)1;
int var_5 = 1096031875;
unsigned long long int var_14 = 3300115213258164368ULL;
unsigned char var_15 = (unsigned char)232;
int zero = 0;
signed char var_18 = (signed char)-14;
short var_19 = (short)-467;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
