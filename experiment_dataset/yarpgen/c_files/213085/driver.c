#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 17747334U;
signed char var_1 = (signed char)-3;
signed char var_2 = (signed char)-112;
unsigned short var_4 = (unsigned short)2562;
unsigned int var_5 = 727716718U;
unsigned int var_6 = 3308885108U;
int zero = 0;
unsigned short var_11 = (unsigned short)5871;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
