#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2051100483;
int var_8 = -1963032292;
unsigned int var_11 = 2724487445U;
int var_14 = -1474535561;
int zero = 0;
unsigned short var_17 = (unsigned short)7466;
unsigned long long int var_18 = 2039704605060501372ULL;
int var_19 = -1724527395;
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
