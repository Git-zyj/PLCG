#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)14967;
unsigned long long int var_8 = 13550798947949886743ULL;
unsigned int var_14 = 3624557103U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)46072;
unsigned long long int var_19 = 6229164338388014552ULL;
unsigned char var_20 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
