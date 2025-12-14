#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5069427991003351945ULL;
int var_2 = -1645176692;
int var_3 = -681065771;
long long int var_5 = -1608583395476796568LL;
int var_6 = 891760381;
int var_9 = 1540510706;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)43;
unsigned long long int var_13 = 15363379171334973889ULL;
int zero = 0;
signed char var_14 = (signed char)-104;
short var_15 = (short)8978;
unsigned long long int var_16 = 14509665794750220399ULL;
void init() {
}

void checksum() {
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
