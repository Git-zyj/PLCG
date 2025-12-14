#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-42;
unsigned char var_3 = (unsigned char)70;
unsigned short var_6 = (unsigned short)45516;
int var_7 = 1437516172;
unsigned int var_8 = 4063955274U;
int var_9 = 788620210;
unsigned long long int var_11 = 2335339890776570675ULL;
signed char var_12 = (signed char)89;
int zero = 0;
signed char var_13 = (signed char)109;
unsigned short var_14 = (unsigned short)24178;
long long int var_15 = 6018281347038229646LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
