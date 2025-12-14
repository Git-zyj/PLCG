#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
short var_1 = (short)27913;
unsigned short var_3 = (unsigned short)52641;
long long int var_8 = -4946117112321297313LL;
unsigned char var_9 = (unsigned char)168;
unsigned long long int var_11 = 7126958568020193200ULL;
long long int var_12 = -5005294858777619189LL;
unsigned int var_13 = 1740598181U;
short var_15 = (short)13954;
int zero = 0;
short var_19 = (short)13221;
unsigned char var_20 = (unsigned char)89;
unsigned char var_21 = (unsigned char)240;
int var_22 = -654506858;
void init() {
}

void checksum() {
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
