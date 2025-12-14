#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 395493919;
unsigned int var_4 = 1868552525U;
unsigned char var_6 = (unsigned char)155;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 1273337209U;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-9;
unsigned short var_17 = (unsigned short)20254;
int zero = 0;
unsigned short var_18 = (unsigned short)52101;
unsigned int var_19 = 1608858458U;
unsigned char var_20 = (unsigned char)90;
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
