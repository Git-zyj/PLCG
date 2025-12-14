#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)27940;
short var_5 = (short)-5472;
long long int var_6 = 8651386916707100847LL;
unsigned long long int var_9 = 9838521572174602396ULL;
long long int var_10 = -7052188062482198279LL;
short var_17 = (short)16759;
int zero = 0;
signed char var_20 = (signed char)108;
long long int var_21 = 5107751760810099885LL;
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
