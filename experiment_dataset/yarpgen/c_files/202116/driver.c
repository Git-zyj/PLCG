#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7782584541176623779LL;
unsigned short var_8 = (unsigned short)53882;
long long int var_10 = 8505635443362690600LL;
long long int var_11 = 1385667436984566375LL;
int zero = 0;
int var_13 = -874408560;
unsigned char var_14 = (unsigned char)249;
long long int var_15 = -2630108247449617886LL;
unsigned char var_16 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
