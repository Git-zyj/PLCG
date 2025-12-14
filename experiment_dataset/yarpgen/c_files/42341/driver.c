#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1138034380;
unsigned long long int var_9 = 8780619843219027717ULL;
_Bool var_11 = (_Bool)1;
unsigned int var_17 = 3064151751U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6731577278583444525LL;
int var_20 = 2051618759;
void init() {
}

void checksum() {
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
