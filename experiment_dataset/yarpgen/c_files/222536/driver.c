#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)192;
unsigned short var_11 = (unsigned short)11547;
int zero = 0;
unsigned int var_12 = 3709656519U;
long long int var_13 = -2246908766045786785LL;
int var_14 = 1348727512;
long long int var_15 = 1315625964484825651LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
