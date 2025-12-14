#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)27781;
long long int var_9 = 8323715352476192897LL;
unsigned int var_15 = 2718609390U;
long long int var_16 = -7392456842162240324LL;
unsigned int var_19 = 587695360U;
int zero = 0;
unsigned int var_20 = 539564549U;
long long int var_21 = 186256507369567726LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
