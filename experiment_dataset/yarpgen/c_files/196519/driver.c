#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-10;
unsigned short var_5 = (unsigned short)11326;
unsigned int var_13 = 3960619175U;
int zero = 0;
unsigned short var_15 = (unsigned short)14447;
unsigned short var_16 = (unsigned short)3567;
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
