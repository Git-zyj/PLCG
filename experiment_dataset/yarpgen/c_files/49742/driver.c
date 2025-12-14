#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 880842143U;
unsigned char var_2 = (unsigned char)15;
unsigned long long int var_5 = 3919934472115009554ULL;
int var_6 = 1999778139;
int var_7 = 1926343678;
int var_10 = -1136799153;
int zero = 0;
long long int var_13 = -3472881264502828217LL;
unsigned char var_14 = (unsigned char)213;
unsigned int var_15 = 628287752U;
int var_16 = -798501628;
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
