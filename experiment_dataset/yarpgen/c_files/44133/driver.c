#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)63;
unsigned long long int var_14 = 13289883403881248697ULL;
unsigned char var_17 = (unsigned char)59;
int zero = 0;
short var_18 = (short)13155;
unsigned short var_19 = (unsigned short)12177;
short var_20 = (short)-5299;
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
