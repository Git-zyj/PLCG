#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18387218957310874282ULL;
unsigned long long int var_9 = 5737267796670128124ULL;
int zero = 0;
unsigned long long int var_15 = 9889942617234233056ULL;
unsigned char var_16 = (unsigned char)87;
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
