#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6276874651220320183ULL;
short var_5 = (short)-13473;
short var_8 = (short)-30568;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 53843043U;
_Bool var_13 = (_Bool)0;
short var_16 = (short)17064;
unsigned int var_17 = 1410650370U;
int zero = 0;
unsigned long long int var_18 = 4188440450016819882ULL;
unsigned long long int var_19 = 9206458939070073980ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-628;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
