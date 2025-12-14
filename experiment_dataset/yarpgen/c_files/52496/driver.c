#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = -34419822;
signed char var_7 = (signed char)68;
int var_8 = -1344981259;
long long int var_10 = 3414007736415549724LL;
signed char var_11 = (signed char)84;
int zero = 0;
long long int var_13 = 8119511710439965349LL;
int var_14 = 876002094;
int var_15 = 923308598;
void init() {
}

void checksum() {
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
