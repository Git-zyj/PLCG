#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43276;
long long int var_8 = 4453703010807174095LL;
unsigned long long int var_13 = 16174996993011688794ULL;
signed char var_16 = (signed char)-23;
signed char var_17 = (signed char)41;
int zero = 0;
unsigned short var_20 = (unsigned short)3833;
unsigned long long int var_21 = 8838589574166395302ULL;
long long int var_22 = 6404448822493750818LL;
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
