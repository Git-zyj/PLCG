#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned int var_4 = 2702776396U;
short var_10 = (short)-23626;
_Bool var_11 = (_Bool)0;
short var_15 = (short)-4190;
int zero = 0;
short var_20 = (short)-19829;
unsigned int var_21 = 1277909701U;
short var_22 = (short)-16313;
unsigned char var_23 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
