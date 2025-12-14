#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)247;
signed char var_3 = (signed char)-1;
_Bool var_5 = (_Bool)1;
long long int var_9 = 8309505572429686248LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3277720790U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14626058599762234802ULL;
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
