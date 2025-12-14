#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)29074;
unsigned short var_7 = (unsigned short)43415;
unsigned short var_9 = (unsigned short)63472;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 2468551024U;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
