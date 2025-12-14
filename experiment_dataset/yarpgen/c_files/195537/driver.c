#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20289;
unsigned char var_3 = (unsigned char)63;
signed char var_5 = (signed char)117;
unsigned char var_6 = (unsigned char)44;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1122559485U;
int var_18 = -925967519;
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
