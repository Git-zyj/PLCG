#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56661;
long long int var_3 = -6541888502883159548LL;
long long int var_5 = -7632089547969405880LL;
unsigned short var_7 = (unsigned short)14790;
unsigned int var_8 = 1679139359U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)10;
int zero = 0;
int var_14 = -1791955024;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)55967;
int var_17 = 1860822768;
long long int var_18 = 3493120112625621723LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
