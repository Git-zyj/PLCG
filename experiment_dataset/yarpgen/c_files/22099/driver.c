#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2008301872;
unsigned long long int var_3 = 10128259617720770103ULL;
long long int var_6 = -8550462295288276134LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 643414538U;
long long int var_15 = 2847518693740403656LL;
_Bool var_16 = (_Bool)0;
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
