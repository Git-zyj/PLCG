#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3121953261U;
unsigned int var_14 = 264296459U;
unsigned short var_15 = (unsigned short)4375;
int zero = 0;
unsigned short var_17 = (unsigned short)18860;
unsigned int var_18 = 1200948705U;
unsigned short var_19 = (unsigned short)20577;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
