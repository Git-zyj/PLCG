#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 1361181661;
unsigned char var_5 = (unsigned char)76;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)77;
int zero = 0;
signed char var_16 = (signed char)111;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
