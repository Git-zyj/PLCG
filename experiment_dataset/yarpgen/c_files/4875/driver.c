#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7714864512383723850ULL;
long long int var_4 = 2163171685782887865LL;
long long int var_10 = 4264937707852418889LL;
int zero = 0;
unsigned char var_18 = (unsigned char)204;
unsigned long long int var_19 = 8747302658402281534ULL;
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
