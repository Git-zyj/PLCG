#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3584899715U;
unsigned int var_12 = 3637345042U;
unsigned short var_17 = (unsigned short)26530;
int zero = 0;
signed char var_19 = (signed char)90;
signed char var_20 = (signed char)78;
unsigned short var_21 = (unsigned short)42443;
short var_22 = (short)32393;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
