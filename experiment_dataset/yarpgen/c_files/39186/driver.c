#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5616686161516339222LL;
int var_7 = -1924793000;
unsigned long long int var_13 = 4262818225893943689ULL;
unsigned int var_14 = 2581956649U;
unsigned int var_15 = 2656378847U;
int zero = 0;
signed char var_16 = (signed char)2;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
