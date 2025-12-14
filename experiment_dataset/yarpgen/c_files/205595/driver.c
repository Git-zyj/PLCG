#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 218333279;
short var_6 = (short)-5758;
unsigned int var_7 = 3218579251U;
unsigned int var_12 = 1962433923U;
int zero = 0;
signed char var_15 = (signed char)-110;
signed char var_16 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
