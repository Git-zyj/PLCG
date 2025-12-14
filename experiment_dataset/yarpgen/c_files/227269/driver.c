#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1854788078;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9247769421077581594ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 9990060197351129223ULL;
short var_7 = (short)-23505;
short var_8 = (short)16591;
short var_13 = (short)-10145;
int zero = 0;
unsigned int var_14 = 2162774901U;
short var_15 = (short)-17720;
unsigned int var_16 = 470296041U;
void init() {
}

void checksum() {
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
