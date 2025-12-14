#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 822475314;
unsigned char var_14 = (unsigned char)207;
int zero = 0;
unsigned long long int var_18 = 7500740374519192768ULL;
unsigned char var_19 = (unsigned char)128;
int var_20 = -647515866;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
