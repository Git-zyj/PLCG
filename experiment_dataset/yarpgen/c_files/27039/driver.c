#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9127377052559539279LL;
unsigned int var_6 = 1621297152U;
unsigned short var_8 = (unsigned short)5595;
unsigned char var_10 = (unsigned char)63;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3636391459U;
int zero = 0;
unsigned short var_16 = (unsigned short)33995;
unsigned long long int var_17 = 1546477935782331196ULL;
long long int var_18 = -4901966690062225094LL;
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
