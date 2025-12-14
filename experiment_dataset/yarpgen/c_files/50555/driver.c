#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4426978602995164025ULL;
unsigned char var_4 = (unsigned char)248;
int var_5 = -2140110797;
int zero = 0;
long long int var_17 = 4998303413985882977LL;
int var_18 = 1820866142;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
