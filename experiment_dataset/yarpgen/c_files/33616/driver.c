#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1986150928;
unsigned short var_1 = (unsigned short)29007;
unsigned int var_3 = 1298358015U;
_Bool var_9 = (_Bool)1;
int var_10 = -1856311757;
unsigned int var_11 = 2692201716U;
long long int var_12 = 6560313606754881254LL;
int zero = 0;
unsigned char var_13 = (unsigned char)219;
int var_14 = 1318079999;
long long int var_15 = 650955271221145071LL;
unsigned char var_16 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
