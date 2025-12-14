#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2510462403U;
unsigned int var_4 = 3382750289U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_14 = -1406162794;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 1497045245;
_Bool var_17 = (_Bool)1;
int var_18 = 320846532;
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
