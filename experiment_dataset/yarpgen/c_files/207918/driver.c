#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26173;
unsigned long long int var_1 = 3427351291186226169ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1932634961U;
unsigned short var_4 = (unsigned short)44591;
unsigned long long int var_5 = 12176869180405479924ULL;
unsigned short var_8 = (unsigned short)45116;
short var_9 = (short)-7041;
unsigned long long int var_10 = 15149658048688684652ULL;
unsigned short var_11 = (unsigned short)56204;
int zero = 0;
unsigned long long int var_12 = 3582922635393357544ULL;
unsigned short var_13 = (unsigned short)5651;
short var_14 = (short)32340;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
