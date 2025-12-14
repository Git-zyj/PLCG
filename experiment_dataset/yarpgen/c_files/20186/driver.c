#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14762933092199437571ULL;
unsigned long long int var_4 = 225457669435320486ULL;
unsigned int var_5 = 3070483620U;
int var_7 = -245449776;
unsigned char var_8 = (unsigned char)90;
int var_9 = -1946004894;
signed char var_10 = (signed char)72;
unsigned short var_12 = (unsigned short)37893;
int zero = 0;
unsigned int var_20 = 964266364U;
long long int var_21 = 3871231681861252176LL;
long long int var_22 = -5954746084452189682LL;
void init() {
}

void checksum() {
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
