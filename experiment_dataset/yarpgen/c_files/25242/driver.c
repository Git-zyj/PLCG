#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2995218579386883150LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3857505154U;
unsigned char var_11 = (unsigned char)49;
int var_12 = -559319223;
int zero = 0;
unsigned char var_14 = (unsigned char)63;
int var_15 = -749936762;
long long int var_16 = 7874813894538754484LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
