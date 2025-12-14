#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2436383570903708981ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_13 = (unsigned short)64855;
unsigned long long int var_15 = 14541410701887001683ULL;
int zero = 0;
int var_16 = 593140088;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14990977658112669390ULL;
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
