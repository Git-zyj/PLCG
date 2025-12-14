#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 3244933323U;
unsigned int var_6 = 2960551786U;
unsigned int var_7 = 1063168173U;
unsigned short var_8 = (unsigned short)48450;
unsigned int var_9 = 2002558013U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3187084126U;
unsigned int var_14 = 692669196U;
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
