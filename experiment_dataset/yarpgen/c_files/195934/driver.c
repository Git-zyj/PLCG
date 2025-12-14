#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4739234509458625827LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 10612517266329080315ULL;
unsigned int var_5 = 2673267473U;
long long int var_8 = 2273880019091575651LL;
long long int var_9 = 6136130300253532669LL;
unsigned short var_12 = (unsigned short)49172;
unsigned long long int var_15 = 5668850514703434813ULL;
int zero = 0;
unsigned int var_20 = 629195447U;
long long int var_21 = 7475575902057743895LL;
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
