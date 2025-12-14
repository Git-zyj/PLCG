#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
unsigned char var_1 = (unsigned char)165;
unsigned short var_3 = (unsigned short)49916;
unsigned long long int var_4 = 1183079145275526972ULL;
int var_5 = -1606568041;
_Bool var_6 = (_Bool)0;
int var_8 = -99633207;
unsigned int var_10 = 2151888253U;
int zero = 0;
unsigned int var_12 = 699366070U;
unsigned long long int var_13 = 8916736766216780841ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-75;
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
