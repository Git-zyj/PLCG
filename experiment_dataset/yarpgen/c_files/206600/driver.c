#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)42480;
unsigned char var_4 = (unsigned char)59;
unsigned char var_6 = (unsigned char)183;
unsigned short var_7 = (unsigned short)41744;
int zero = 0;
unsigned char var_16 = (unsigned char)119;
signed char var_17 = (signed char)104;
unsigned short var_18 = (unsigned short)36846;
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
