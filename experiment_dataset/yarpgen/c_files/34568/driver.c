#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)90;
long long int var_5 = 3903326726754246100LL;
unsigned long long int var_8 = 4064067599568081618ULL;
unsigned char var_9 = (unsigned char)19;
long long int var_10 = 1835971408950891911LL;
long long int var_14 = 7089589443749393048LL;
int zero = 0;
long long int var_15 = -5850228496839861105LL;
long long int var_16 = -5557889416277361361LL;
unsigned char var_17 = (unsigned char)66;
unsigned char var_18 = (unsigned char)221;
long long int var_19 = 4421553849904546499LL;
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
