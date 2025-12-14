#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1425924412;
unsigned int var_6 = 2189016126U;
short var_10 = (short)-29796;
signed char var_12 = (signed char)-13;
int zero = 0;
unsigned int var_14 = 3154395937U;
signed char var_15 = (signed char)91;
void init() {
}

void checksum() {
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
