#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2107257383;
_Bool var_4 = (_Bool)1;
signed char var_15 = (signed char)-82;
int zero = 0;
unsigned int var_20 = 3988315123U;
short var_21 = (short)18062;
unsigned long long int var_22 = 16794436533225023540ULL;
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
