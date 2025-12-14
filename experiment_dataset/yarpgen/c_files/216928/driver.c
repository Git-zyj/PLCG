#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)116;
unsigned int var_7 = 1831641947U;
int zero = 0;
unsigned int var_10 = 3844953919U;
unsigned int var_11 = 1338322617U;
unsigned int var_12 = 3343146281U;
unsigned int var_13 = 9109814U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
