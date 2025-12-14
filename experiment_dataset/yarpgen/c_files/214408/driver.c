#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3914493655221199115LL;
int var_7 = 696625687;
long long int var_9 = -3285895405844395747LL;
unsigned int var_12 = 913919642U;
signed char var_14 = (signed char)77;
int zero = 0;
int var_16 = -2000665935;
unsigned int var_17 = 238917614U;
unsigned long long int var_18 = 12614459027058867867ULL;
void init() {
}

void checksum() {
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
