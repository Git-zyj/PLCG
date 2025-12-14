#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
unsigned short var_2 = (unsigned short)59051;
long long int var_3 = 5617881378120800254LL;
unsigned long long int var_6 = 13404077552874333691ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)62773;
unsigned short var_17 = (unsigned short)10067;
unsigned long long int var_18 = 2318776382900511355ULL;
void init() {
}

void checksum() {
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
