#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
short var_1 = (short)-27287;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-59;
unsigned long long int var_5 = 8363010223293590998ULL;
long long int var_6 = -6691884274205801799LL;
long long int var_12 = 2506067619482784000LL;
int zero = 0;
int var_15 = 1704059742;
int var_16 = 258417686;
signed char var_17 = (signed char)-114;
int var_18 = -529707533;
void init() {
}

void checksum() {
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
