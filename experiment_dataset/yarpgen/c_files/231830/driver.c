#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-100;
unsigned int var_5 = 1830866696U;
unsigned long long int var_11 = 2903953289542950038ULL;
unsigned short var_16 = (unsigned short)61798;
int zero = 0;
unsigned int var_17 = 2385728360U;
long long int var_18 = -3829755757306907807LL;
int var_19 = -1521964209;
unsigned long long int var_20 = 13288546186953604294ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
