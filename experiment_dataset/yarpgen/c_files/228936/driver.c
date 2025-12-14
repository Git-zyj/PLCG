#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1788815672;
signed char var_3 = (signed char)18;
unsigned int var_5 = 1432000819U;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)43996;
unsigned short var_17 = (unsigned short)58761;
signed char var_18 = (signed char)-16;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2155553822U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
