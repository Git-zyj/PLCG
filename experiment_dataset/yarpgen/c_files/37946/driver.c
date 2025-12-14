#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned short var_2 = (unsigned short)38430;
unsigned int var_7 = 3043696721U;
int zero = 0;
unsigned int var_12 = 4007130350U;
int var_13 = -1538205901;
unsigned long long int var_14 = 9846407264325976607ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
