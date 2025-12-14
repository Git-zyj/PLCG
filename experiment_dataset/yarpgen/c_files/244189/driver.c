#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3337;
unsigned char var_6 = (unsigned char)145;
unsigned int var_8 = 1513603570U;
unsigned int var_9 = 1526788014U;
int zero = 0;
unsigned int var_15 = 3102999052U;
signed char var_16 = (signed char)26;
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
