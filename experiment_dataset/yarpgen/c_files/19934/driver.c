#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)85;
long long int var_3 = 7116734804358616688LL;
int var_5 = -418887994;
_Bool var_6 = (_Bool)1;
long long int var_8 = 2539580754515714776LL;
short var_12 = (short)20988;
_Bool var_17 = (_Bool)0;
long long int var_19 = 7858758992762378022LL;
int zero = 0;
unsigned int var_20 = 2939369705U;
unsigned short var_21 = (unsigned short)2696;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
