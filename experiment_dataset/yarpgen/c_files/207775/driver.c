#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -714243449;
unsigned char var_2 = (unsigned char)56;
unsigned int var_5 = 102136933U;
unsigned short var_6 = (unsigned short)7379;
signed char var_11 = (signed char)-67;
int zero = 0;
long long int var_14 = -804085844890837656LL;
unsigned long long int var_15 = 10639864013043105994ULL;
unsigned char var_16 = (unsigned char)95;
void init() {
}

void checksum() {
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
