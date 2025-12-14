#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4265774004U;
signed char var_1 = (signed char)110;
unsigned short var_5 = (unsigned short)26545;
long long int var_8 = -1476356377930420802LL;
int zero = 0;
unsigned short var_11 = (unsigned short)17912;
signed char var_12 = (signed char)-127;
unsigned long long int var_13 = 1350275337508252382ULL;
signed char var_14 = (signed char)55;
unsigned long long int var_15 = 2614206114823559642ULL;
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
