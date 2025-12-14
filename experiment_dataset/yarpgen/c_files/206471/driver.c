#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 881829468U;
unsigned long long int var_4 = 1732338345017144837ULL;
short var_5 = (short)-16251;
int zero = 0;
unsigned long long int var_11 = 14070508658066925529ULL;
short var_12 = (short)-7122;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-16655;
short var_15 = (short)1632;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
