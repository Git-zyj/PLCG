#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2160397717U;
unsigned char var_11 = (unsigned char)85;
unsigned long long int var_13 = 15801775579269994591ULL;
unsigned long long int var_14 = 956918670518182187ULL;
unsigned char var_15 = (unsigned char)204;
int zero = 0;
unsigned short var_17 = (unsigned short)53746;
int var_18 = -727660471;
unsigned long long int var_19 = 1802291283692851767ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
