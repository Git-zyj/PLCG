#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
unsigned char var_3 = (unsigned char)252;
unsigned int var_5 = 932832261U;
int var_7 = -405999000;
signed char var_8 = (signed char)68;
unsigned short var_10 = (unsigned short)48664;
unsigned int var_13 = 2775998395U;
unsigned char var_15 = (unsigned char)195;
unsigned char var_18 = (unsigned char)39;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)24071;
int var_21 = -118372943;
short var_22 = (short)27788;
unsigned int var_23 = 729285009U;
long long int var_24 = 7048847321653155187LL;
long long int var_25 = 7655360180587507502LL;
_Bool arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
