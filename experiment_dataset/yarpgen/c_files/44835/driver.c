#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -224308463;
short var_11 = (short)27531;
unsigned int var_17 = 176911364U;
int zero = 0;
unsigned int var_18 = 3707882086U;
unsigned short var_19 = (unsigned short)54125;
unsigned long long int var_20 = 8186823575726714864ULL;
unsigned char var_21 = (unsigned char)241;
long long int var_22 = 6333413423361067854LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
