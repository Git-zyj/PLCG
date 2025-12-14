#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44493;
int var_2 = -349341172;
unsigned long long int var_8 = 14710877594381834504ULL;
unsigned int var_11 = 2051333827U;
int zero = 0;
int var_13 = -1650108617;
int var_14 = 2025298680;
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
