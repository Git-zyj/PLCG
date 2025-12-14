#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-16;
unsigned long long int var_11 = 7165275449246447634ULL;
unsigned int var_18 = 2485254363U;
int zero = 0;
unsigned char var_20 = (unsigned char)78;
unsigned int var_21 = 3863029230U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
