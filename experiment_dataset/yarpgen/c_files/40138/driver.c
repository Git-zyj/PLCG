#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 1891519211U;
unsigned long long int var_10 = 14662523191334062746ULL;
unsigned char var_11 = (unsigned char)75;
long long int var_12 = 8983225387651140692LL;
int zero = 0;
unsigned short var_18 = (unsigned short)14634;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
