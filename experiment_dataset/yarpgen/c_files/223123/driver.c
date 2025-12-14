#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8503995206305666443LL;
int var_2 = -869734;
long long int var_5 = -3145014973043278147LL;
int var_7 = -2130455927;
long long int var_8 = -8247783791086449176LL;
long long int var_11 = 7011456030530522485LL;
int zero = 0;
short var_15 = (short)-20361;
unsigned long long int var_16 = 3251515483731749489ULL;
void init() {
}

void checksum() {
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
