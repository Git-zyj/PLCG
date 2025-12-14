#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1214;
long long int var_2 = -1033746047639494863LL;
unsigned short var_6 = (unsigned short)57125;
unsigned long long int var_13 = 15799409120934123433ULL;
unsigned short var_16 = (unsigned short)15307;
int zero = 0;
unsigned long long int var_17 = 17354919579349288528ULL;
unsigned short var_18 = (unsigned short)56804;
signed char var_19 = (signed char)-119;
signed char var_20 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
