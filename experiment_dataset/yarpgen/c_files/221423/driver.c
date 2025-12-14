#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7204946062067729273ULL;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 12653783071394252978ULL;
unsigned int var_11 = 1901919761U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
