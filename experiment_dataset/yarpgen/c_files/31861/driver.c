#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3847;
unsigned int var_6 = 3757804258U;
long long int var_7 = -5621231969747130218LL;
long long int var_8 = 1652189752079131210LL;
long long int var_9 = 8153392073337885546LL;
unsigned int var_10 = 1057776379U;
unsigned long long int var_13 = 11269381911077010310ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)58634;
void init() {
}

void checksum() {
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
