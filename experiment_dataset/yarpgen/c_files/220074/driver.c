#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2294919158U;
unsigned int var_2 = 3402520830U;
unsigned short var_10 = (unsigned short)20802;
int zero = 0;
unsigned char var_18 = (unsigned char)105;
unsigned int var_19 = 4111026118U;
void init() {
}

void checksum() {
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
