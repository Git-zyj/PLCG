#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)129;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)53928;
int var_12 = 1002651354;
int zero = 0;
unsigned int var_14 = 2731654451U;
unsigned long long int var_15 = 935886841132858234ULL;
unsigned int var_16 = 1628167398U;
unsigned int var_17 = 1948411197U;
unsigned short var_18 = (unsigned short)49237;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
