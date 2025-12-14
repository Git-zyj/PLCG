#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13528237044511461014ULL;
unsigned long long int var_4 = 5500724777526296134ULL;
short var_5 = (short)-13318;
_Bool var_12 = (_Bool)1;
short var_14 = (short)15916;
unsigned char var_16 = (unsigned char)28;
int zero = 0;
int var_17 = 711402732;
unsigned char var_18 = (unsigned char)135;
unsigned short var_19 = (unsigned short)51240;
short var_20 = (short)17252;
unsigned char var_21 = (unsigned char)242;
short var_22 = (short)-23881;
unsigned int var_23 = 4003946445U;
signed char arr_0 [14] ;
signed char arr_1 [14] ;
long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)125 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)3 : (signed char)40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1478501501346871768LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
