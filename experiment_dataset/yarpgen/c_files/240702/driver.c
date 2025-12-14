#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1697947891189617600ULL;
unsigned long long int var_2 = 360722530598862636ULL;
unsigned short var_3 = (unsigned short)10504;
unsigned int var_7 = 3615603823U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)49121;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)55;
unsigned short var_17 = (unsigned short)36186;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
