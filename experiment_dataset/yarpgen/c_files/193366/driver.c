#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18682;
unsigned short var_5 = (unsigned short)29019;
short var_7 = (short)-23447;
unsigned long long int var_8 = 15336960209128982881ULL;
long long int var_11 = 429910796536315921LL;
unsigned long long int var_14 = 2604703645057723201ULL;
long long int var_15 = -526003986009859045LL;
int zero = 0;
unsigned long long int var_17 = 3583060503988174752ULL;
unsigned short var_18 = (unsigned short)31407;
short var_19 = (short)-28255;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
