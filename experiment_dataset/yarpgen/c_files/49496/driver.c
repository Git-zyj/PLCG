#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)-83;
unsigned short var_9 = (unsigned short)32340;
int var_10 = -1333541209;
int var_12 = 1889560375;
signed char var_13 = (signed char)123;
int zero = 0;
int var_15 = -89031628;
int var_16 = -999620465;
int var_17 = -1604759553;
signed char var_18 = (signed char)-36;
long long int var_19 = -4842541800008283962LL;
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
