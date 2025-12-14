#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6768;
unsigned int var_1 = 2154736773U;
short var_4 = (short)27708;
int var_13 = 572971422;
int zero = 0;
unsigned int var_15 = 2588422224U;
unsigned int var_16 = 1237062381U;
signed char var_17 = (signed char)82;
void init() {
}

void checksum() {
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
