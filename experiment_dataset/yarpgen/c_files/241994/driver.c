#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20809;
unsigned char var_2 = (unsigned char)128;
signed char var_3 = (signed char)30;
_Bool var_7 = (_Bool)1;
int var_8 = 272819826;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-1258;
int var_12 = 251462066;
int var_13 = -134843304;
signed char var_17 = (signed char)-16;
signed char var_19 = (signed char)51;
int zero = 0;
unsigned long long int var_20 = 4437870174134000940ULL;
unsigned short var_21 = (unsigned short)30176;
unsigned short var_22 = (unsigned short)16729;
unsigned long long int var_23 = 3914973057850069538ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
