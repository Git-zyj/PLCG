#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_7 = (unsigned short)54214;
short var_9 = (short)19455;
unsigned int var_10 = 883891543U;
long long int var_13 = 159668763003215148LL;
unsigned short var_17 = (unsigned short)25378;
int zero = 0;
long long int var_19 = -2855324238429251087LL;
int var_20 = -2012640288;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
