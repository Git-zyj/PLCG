#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 11565119U;
signed char var_12 = (signed char)44;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 17634925847570740919ULL;
unsigned short var_19 = (unsigned short)30846;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
