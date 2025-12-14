#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)36;
unsigned char var_7 = (unsigned char)64;
long long int var_9 = 5255229549583924353LL;
unsigned char var_11 = (unsigned char)160;
int zero = 0;
unsigned int var_13 = 2872626726U;
unsigned int var_14 = 4258411782U;
unsigned int var_15 = 942896974U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
