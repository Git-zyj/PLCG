#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2956;
int var_2 = -1481132953;
_Bool var_6 = (_Bool)0;
int var_8 = 2124201408;
int var_10 = -1226647498;
long long int var_11 = 7419331234167371903LL;
unsigned int var_12 = 560089539U;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-32;
short var_16 = (short)19558;
short var_17 = (short)8600;
int var_18 = -11652486;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)14140;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
