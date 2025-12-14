#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 997706920U;
signed char var_11 = (signed char)-22;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
unsigned char var_15 = (unsigned char)14;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)45;
unsigned long long int var_18 = 8930897582811745319ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
