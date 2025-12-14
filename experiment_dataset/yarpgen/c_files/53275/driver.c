#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
_Bool var_3 = (_Bool)1;
int var_5 = -588160615;
unsigned int var_7 = 2447468730U;
unsigned int var_10 = 2321845122U;
int zero = 0;
short var_14 = (short)-2385;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)176;
signed char var_17 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
