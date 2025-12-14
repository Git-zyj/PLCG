#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 3912607718U;
unsigned int var_4 = 2971965012U;
long long int var_5 = 8031817423214585898LL;
unsigned int var_7 = 1003213689U;
signed char var_8 = (signed char)-33;
unsigned long long int var_10 = 17670486456296037634ULL;
unsigned int var_11 = 3495619558U;
short var_12 = (short)-25662;
unsigned char var_13 = (unsigned char)79;
int zero = 0;
unsigned long long int var_14 = 14220703453899671834ULL;
unsigned int var_15 = 1789189787U;
short var_16 = (short)-23638;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)24754;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
