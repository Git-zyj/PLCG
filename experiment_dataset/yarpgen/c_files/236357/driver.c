#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7695799423677277764LL;
unsigned short var_6 = (unsigned short)42893;
long long int var_11 = 3494607568123517248LL;
long long int var_13 = 1157950659456136391LL;
unsigned int var_15 = 4294738421U;
int zero = 0;
long long int var_17 = -9162373702822829022LL;
unsigned short var_18 = (unsigned short)23878;
signed char var_19 = (signed char)-99;
unsigned char var_20 = (unsigned char)164;
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
