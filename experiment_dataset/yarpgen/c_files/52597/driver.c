#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_8 = 8669769158366788896ULL;
signed char var_9 = (signed char)-19;
signed char var_11 = (signed char)-114;
unsigned char var_12 = (unsigned char)128;
short var_13 = (short)19174;
int zero = 0;
short var_14 = (short)13488;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-94;
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
