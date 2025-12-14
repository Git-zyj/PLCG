#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1751596411;
unsigned int var_13 = 3388564301U;
int zero = 0;
unsigned int var_20 = 4215634060U;
long long int var_21 = 1668817087200622256LL;
unsigned char var_22 = (unsigned char)239;
unsigned int var_23 = 3419323687U;
short var_24 = (short)17915;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
