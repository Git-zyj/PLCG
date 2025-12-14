#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 121133120194515608ULL;
unsigned long long int var_3 = 6814107252847404650ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 5769513012378821718ULL;
int zero = 0;
unsigned long long int var_10 = 3476120830972562891ULL;
int var_11 = -1831367134;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
