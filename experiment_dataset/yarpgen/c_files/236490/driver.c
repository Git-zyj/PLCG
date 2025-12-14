#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1960730488;
_Bool var_4 = (_Bool)0;
unsigned long long int var_10 = 5320345602331354505ULL;
unsigned char var_11 = (unsigned char)134;
int zero = 0;
unsigned long long int var_12 = 6104818230827021926ULL;
int var_13 = 981301958;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4071217719563456931ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
