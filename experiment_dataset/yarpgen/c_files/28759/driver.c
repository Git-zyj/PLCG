#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32569;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)13096;
unsigned long long int var_7 = 13376556631272686031ULL;
int zero = 0;
long long int var_12 = 7045245628445496641LL;
unsigned int var_13 = 896258652U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
