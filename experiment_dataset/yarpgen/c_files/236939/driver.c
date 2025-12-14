#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2726043257U;
signed char var_3 = (signed char)-118;
int var_4 = 476709120;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -87119662;
unsigned int var_13 = 2569013621U;
short var_14 = (short)12158;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
