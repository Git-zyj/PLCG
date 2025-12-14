#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2715845822U;
int var_4 = -638330471;
int var_9 = 1303002927;
int var_10 = -1646095116;
signed char var_13 = (signed char)-1;
int zero = 0;
unsigned int var_14 = 127594470U;
signed char var_15 = (signed char)26;
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
