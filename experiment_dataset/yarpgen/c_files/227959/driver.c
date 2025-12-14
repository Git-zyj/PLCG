#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2883441574U;
int var_4 = 1855250031;
unsigned int var_5 = 1271084264U;
unsigned int var_9 = 2175168987U;
unsigned int var_10 = 3528693798U;
int zero = 0;
signed char var_13 = (signed char)53;
unsigned long long int var_14 = 5764886627491808053ULL;
unsigned int var_15 = 3915886539U;
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
