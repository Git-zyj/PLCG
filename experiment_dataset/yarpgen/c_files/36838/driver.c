#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9816;
unsigned int var_12 = 3101185506U;
short var_15 = (short)5545;
int zero = 0;
unsigned short var_17 = (unsigned short)2262;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)204;
unsigned short var_20 = (unsigned short)28920;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
