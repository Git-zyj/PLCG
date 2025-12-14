#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2128737116U;
unsigned long long int var_3 = 12522638056866805351ULL;
unsigned int var_4 = 2277582296U;
unsigned int var_5 = 2238295218U;
short var_9 = (short)13169;
unsigned long long int var_13 = 16833887962848916758ULL;
unsigned int var_14 = 1946301243U;
int zero = 0;
short var_16 = (short)-23458;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)136;
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
