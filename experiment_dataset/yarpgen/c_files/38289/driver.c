#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6839590700336910732LL;
unsigned char var_2 = (unsigned char)105;
unsigned int var_5 = 4115890087U;
unsigned short var_6 = (unsigned short)12165;
unsigned int var_8 = 2154012586U;
unsigned short var_11 = (unsigned short)14768;
int zero = 0;
signed char var_12 = (signed char)-115;
short var_13 = (short)13173;
unsigned int var_14 = 2164226134U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
