#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1198149428099441443ULL;
unsigned long long int var_3 = 10441617259697659826ULL;
signed char var_5 = (signed char)85;
short var_6 = (short)-31858;
int var_8 = 1409604784;
unsigned int var_9 = 392825278U;
int zero = 0;
unsigned char var_13 = (unsigned char)51;
unsigned short var_14 = (unsigned short)15897;
int var_15 = -956238483;
unsigned int var_16 = 931218345U;
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
