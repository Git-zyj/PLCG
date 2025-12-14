#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_9 = 2637238247461369605ULL;
unsigned long long int var_10 = 4124237452729029425ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)60643;
signed char var_14 = (signed char)-13;
short var_15 = (short)-124;
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
