#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)142;
unsigned long long int var_9 = 6454984926645773381ULL;
unsigned int var_11 = 160516689U;
unsigned long long int var_16 = 178224668654549213ULL;
int zero = 0;
short var_17 = (short)-11551;
long long int var_18 = -2399876689627324814LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
