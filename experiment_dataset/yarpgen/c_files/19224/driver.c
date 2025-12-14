#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
unsigned long long int var_3 = 4459330524948547046ULL;
signed char var_10 = (signed char)53;
int zero = 0;
signed char var_13 = (signed char)-68;
unsigned long long int var_14 = 13095682122388725206ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
