#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3330718431449079475LL;
long long int var_2 = 5785203928894917513LL;
signed char var_3 = (signed char)69;
long long int var_4 = -8581236976140626223LL;
unsigned short var_6 = (unsigned short)22411;
long long int var_7 = -3268049791065311041LL;
signed char var_9 = (signed char)85;
long long int var_10 = -4682290017600822286LL;
int zero = 0;
long long int var_16 = 2015387196797338809LL;
unsigned short var_17 = (unsigned short)4617;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
