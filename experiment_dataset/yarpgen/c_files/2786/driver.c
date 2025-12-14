#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)52611;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 2703483962U;
unsigned char var_13 = (unsigned char)75;
unsigned int var_15 = 2345769521U;
long long int var_16 = 6645512358796958344LL;
int zero = 0;
unsigned short var_18 = (unsigned short)52399;
unsigned short var_19 = (unsigned short)63609;
unsigned char var_20 = (unsigned char)226;
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
