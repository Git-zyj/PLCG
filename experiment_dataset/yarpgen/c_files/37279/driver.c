#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2181146173482880141ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3476254198653758030ULL;
unsigned long long int var_7 = 4921839993401068294ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-59;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
