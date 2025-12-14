#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
unsigned int var_8 = 4287294520U;
unsigned int var_9 = 3315393455U;
int zero = 0;
unsigned int var_10 = 3597351734U;
unsigned short var_11 = (unsigned short)62715;
unsigned int var_12 = 2757390249U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
