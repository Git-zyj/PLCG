#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15196;
int var_1 = -1819790730;
unsigned short var_2 = (unsigned short)51248;
unsigned int var_10 = 239312576U;
int zero = 0;
unsigned long long int var_13 = 16991034043085934964ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)7503;
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
