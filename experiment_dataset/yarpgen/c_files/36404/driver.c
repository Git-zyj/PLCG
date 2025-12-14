#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9122;
unsigned char var_1 = (unsigned char)39;
long long int var_2 = 3543779810910735236LL;
unsigned short var_5 = (unsigned short)54825;
unsigned int var_10 = 2182445449U;
int var_14 = -1228554645;
unsigned short var_15 = (unsigned short)12863;
long long int var_16 = -1751656437474701238LL;
long long int var_17 = -5819498749854251916LL;
unsigned char var_18 = (unsigned char)197;
int zero = 0;
unsigned char var_19 = (unsigned char)58;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
