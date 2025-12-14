#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2840336273U;
unsigned long long int var_2 = 7309256941148511503ULL;
unsigned long long int var_3 = 9289742267190664697ULL;
int var_4 = -1771995724;
unsigned char var_5 = (unsigned char)230;
short var_6 = (short)-15503;
short var_7 = (short)20234;
unsigned char var_8 = (unsigned char)173;
unsigned short var_9 = (unsigned short)40115;
int zero = 0;
int var_10 = -149450779;
short var_11 = (short)-5261;
int var_12 = 2056391200;
signed char var_13 = (signed char)122;
long long int var_14 = -3426668392615863516LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
