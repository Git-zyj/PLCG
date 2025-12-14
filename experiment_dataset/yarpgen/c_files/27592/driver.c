#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2761262419431273887ULL;
unsigned short var_5 = (unsigned short)63262;
signed char var_10 = (signed char)-75;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_14 = -1970925398978544475LL;
unsigned char var_15 = (unsigned char)173;
signed char var_16 = (signed char)-68;
int var_17 = 1889255966;
signed char var_18 = (signed char)91;
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
