#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4167478228580573104LL;
unsigned long long int var_7 = 13440542259713998ULL;
unsigned char var_8 = (unsigned char)213;
signed char var_11 = (signed char)43;
int zero = 0;
unsigned short var_13 = (unsigned short)27495;
unsigned long long int var_14 = 17490556979332109440ULL;
unsigned char var_15 = (unsigned char)58;
long long int var_16 = 5551753840207036618LL;
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
