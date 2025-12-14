#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3747598504U;
unsigned long long int var_6 = 10707347637360647191ULL;
_Bool var_8 = (_Bool)0;
short var_13 = (short)20766;
int zero = 0;
unsigned int var_17 = 3799794131U;
long long int var_18 = 8892822176240360535LL;
void init() {
}

void checksum() {
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
