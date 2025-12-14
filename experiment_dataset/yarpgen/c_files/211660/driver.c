#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
int var_1 = -1365351165;
unsigned short var_2 = (unsigned short)7719;
short var_4 = (short)19681;
_Bool var_6 = (_Bool)0;
long long int var_7 = -7979548429487295960LL;
unsigned int var_8 = 4219931906U;
unsigned long long int var_10 = 2859799714972010215ULL;
int var_13 = -1661951407;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)137;
unsigned char var_16 = (unsigned char)160;
unsigned int var_17 = 2618572593U;
int var_18 = -56047338;
int zero = 0;
unsigned int var_19 = 4011811188U;
unsigned char var_20 = (unsigned char)8;
unsigned char var_21 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
