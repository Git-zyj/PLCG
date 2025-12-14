#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
long long int var_3 = 6395146329508982482LL;
unsigned char var_5 = (unsigned char)207;
unsigned char var_6 = (unsigned char)127;
signed char var_7 = (signed char)-94;
unsigned char var_8 = (unsigned char)168;
unsigned int var_10 = 4105054164U;
int zero = 0;
unsigned char var_11 = (unsigned char)82;
unsigned char var_12 = (unsigned char)34;
short var_13 = (short)15218;
short var_14 = (short)29501;
int var_15 = 609365165;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
