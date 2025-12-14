#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
unsigned short var_2 = (unsigned short)64060;
unsigned char var_5 = (unsigned char)81;
unsigned int var_7 = 3588675917U;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)190;
unsigned int var_10 = 2437505990U;
int var_11 = -232267565;
int zero = 0;
unsigned int var_14 = 199338740U;
unsigned int var_15 = 3645350729U;
unsigned int var_16 = 890980531U;
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
