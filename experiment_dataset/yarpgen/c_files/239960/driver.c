#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1029778522U;
int var_1 = -6746258;
signed char var_5 = (signed char)18;
unsigned short var_6 = (unsigned short)3621;
unsigned int var_8 = 3594384301U;
unsigned short var_9 = (unsigned short)25037;
int zero = 0;
long long int var_11 = 5302108944345194791LL;
unsigned long long int var_12 = 10050473121761211249ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
