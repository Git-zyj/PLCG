#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1042918046230271333LL;
long long int var_7 = 8702816588077019431LL;
unsigned char var_12 = (unsigned char)14;
unsigned int var_13 = 1324246027U;
int zero = 0;
unsigned char var_14 = (unsigned char)158;
signed char var_15 = (signed char)-12;
unsigned int var_16 = 316537824U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3432932308U;
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
