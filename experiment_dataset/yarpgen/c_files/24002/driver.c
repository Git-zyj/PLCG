#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)73;
int var_5 = -1149922164;
unsigned int var_6 = 1235370884U;
unsigned int var_8 = 2317258811U;
_Bool var_10 = (_Bool)0;
int var_11 = 30402119;
unsigned long long int var_13 = 17395893769653492506ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)255;
int var_16 = 52052507;
unsigned char var_17 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
