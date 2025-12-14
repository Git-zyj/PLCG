#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned long long int var_3 = 6787922920108875337ULL;
unsigned short var_6 = (unsigned short)60457;
unsigned short var_7 = (unsigned short)29004;
int zero = 0;
unsigned long long int var_10 = 13391804426517898266ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
