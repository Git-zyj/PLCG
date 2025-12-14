#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64195;
unsigned char var_4 = (unsigned char)182;
unsigned short var_5 = (unsigned short)63112;
short var_7 = (short)-2167;
unsigned short var_11 = (unsigned short)11293;
signed char var_14 = (signed char)-47;
unsigned short var_15 = (unsigned short)12727;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 554319866;
unsigned int var_19 = 2372219753U;
short var_20 = (short)-20364;
unsigned long long int arr_2 [11] ;
signed char arr_3 [11] ;
signed char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 18160723445031570896ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
