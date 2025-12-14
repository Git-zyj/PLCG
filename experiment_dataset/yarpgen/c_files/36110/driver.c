#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)188;
int zero = 0;
unsigned int var_10 = 539905641U;
int var_11 = 2112297216;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 730181808U;
int var_14 = 952493774;
unsigned short var_15 = (unsigned short)15720;
unsigned short var_16 = (unsigned short)56455;
long long int var_17 = 8271651984316705379LL;
signed char var_18 = (signed char)-68;
unsigned int var_19 = 667442841U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
