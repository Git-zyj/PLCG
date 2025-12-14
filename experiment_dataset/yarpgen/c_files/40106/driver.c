#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)89;
_Bool var_7 = (_Bool)0;
short var_10 = (short)18822;
unsigned short var_14 = (unsigned short)30276;
unsigned short var_15 = (unsigned short)64698;
int zero = 0;
unsigned char var_16 = (unsigned char)192;
short var_17 = (short)-29683;
unsigned int var_18 = 1210596105U;
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
