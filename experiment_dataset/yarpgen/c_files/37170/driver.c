#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned long long int var_2 = 12664413430926042946ULL;
unsigned int var_3 = 2914562046U;
unsigned short var_6 = (unsigned short)61614;
signed char var_10 = (signed char)52;
long long int var_15 = -5723888435459012612LL;
unsigned short var_16 = (unsigned short)908;
long long int var_17 = 3891665883382602897LL;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
long long int var_20 = -6084846371166608723LL;
unsigned int var_21 = 2598182540U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
