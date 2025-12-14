#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6289117608131264165LL;
unsigned int var_2 = 357060989U;
int var_5 = -269587896;
unsigned long long int var_6 = 16015576441159757080ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8656606231102047247ULL;
short var_14 = (short)21007;
signed char var_16 = (signed char)25;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)32;
unsigned int var_21 = 4196943239U;
void init() {
}

void checksum() {
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
