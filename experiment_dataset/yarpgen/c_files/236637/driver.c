#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2106275015U;
unsigned short var_5 = (unsigned short)38752;
short var_6 = (short)-17649;
long long int var_7 = 3357843565680199198LL;
unsigned short var_8 = (unsigned short)43837;
unsigned int var_11 = 2342961942U;
int zero = 0;
unsigned long long int var_13 = 11745642702728456318ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 311424686;
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
