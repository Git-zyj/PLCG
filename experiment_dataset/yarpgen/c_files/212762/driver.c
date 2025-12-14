#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13807437194283247998ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3638254410U;
unsigned long long int var_22 = 11370065720451529025ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
