#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
signed char var_1 = (signed char)84;
_Bool var_2 = (_Bool)0;
int var_3 = -154817691;
signed char var_4 = (signed char)-124;
int var_5 = 1315510422;
int var_6 = 2097877657;
signed char var_9 = (signed char)-57;
int zero = 0;
int var_10 = -1524709062;
signed char var_11 = (signed char)-64;
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
