#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 379952785;
int var_2 = -828410416;
unsigned int var_3 = 983432441U;
signed char var_4 = (signed char)-84;
short var_5 = (short)16724;
long long int var_7 = 6299382561405541095LL;
long long int var_9 = 5335815812296964241LL;
signed char var_12 = (signed char)24;
int var_14 = 976401249;
int zero = 0;
short var_18 = (short)-3224;
short var_19 = (short)19987;
short var_20 = (short)26583;
long long int var_21 = -3303815555899162662LL;
signed char var_22 = (signed char)-66;
long long int var_23 = 996011223570731075LL;
signed char var_24 = (signed char)-43;
_Bool arr_0 [18] ;
unsigned char arr_1 [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
