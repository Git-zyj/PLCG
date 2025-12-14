#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16800107679104597111ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)32;
int var_16 = 998360715;
int zero = 0;
unsigned char var_17 = (unsigned char)110;
short var_18 = (short)21574;
_Bool var_19 = (_Bool)0;
short var_20 = (short)21183;
short var_21 = (short)-19761;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
