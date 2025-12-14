#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
unsigned int var_7 = 3275274551U;
unsigned short var_10 = (unsigned short)48088;
int var_13 = 1218674114;
int zero = 0;
signed char var_15 = (signed char)-119;
unsigned short var_16 = (unsigned short)58037;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)6;
unsigned short var_19 = (unsigned short)35828;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
