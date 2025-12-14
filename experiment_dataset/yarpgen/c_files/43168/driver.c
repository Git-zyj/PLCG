#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11415450635152911346ULL;
int var_1 = 1965571766;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 254942049U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)26;
long long int var_8 = 5019958699235418410LL;
int var_9 = 519749700;
int var_10 = -839912808;
unsigned long long int var_12 = 7986506812508416984ULL;
int zero = 0;
unsigned int var_13 = 1043751799U;
unsigned short var_14 = (unsigned short)44979;
unsigned int var_15 = 4000104911U;
unsigned short var_16 = (unsigned short)29053;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
