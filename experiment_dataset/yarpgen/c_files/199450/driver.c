#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3242622463U;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 1818125540U;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 2704874835U;
unsigned char var_11 = (unsigned char)121;
int var_12 = 655375148;
unsigned int var_15 = 127401252U;
int zero = 0;
signed char var_17 = (signed char)-35;
unsigned char var_18 = (unsigned char)147;
void init() {
}

void checksum() {
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
