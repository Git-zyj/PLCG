#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3506696244U;
unsigned long long int var_6 = 5383917134194014208ULL;
short var_7 = (short)-8119;
int var_10 = 301230282;
int zero = 0;
short var_11 = (short)-27665;
unsigned short var_12 = (unsigned short)21519;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
