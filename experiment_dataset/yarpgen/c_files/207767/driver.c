#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3744982263U;
int var_2 = -1973481182;
unsigned int var_3 = 3714194705U;
int var_4 = 1661939454;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_15 = 1718883068;
short var_16 = (short)-16166;
void init() {
}

void checksum() {
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
