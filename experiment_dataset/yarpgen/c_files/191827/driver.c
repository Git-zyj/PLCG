#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1370932776U;
unsigned char var_10 = (unsigned char)152;
int var_13 = 16638362;
unsigned int var_14 = 1055693136U;
unsigned long long int var_15 = 9166347648693328856ULL;
short var_17 = (short)-10093;
int zero = 0;
int var_18 = -1662068854;
unsigned char var_19 = (unsigned char)121;
unsigned long long int var_20 = 17766653849824255193ULL;
int var_21 = 1562651900;
unsigned short var_22 = (unsigned short)37580;
int var_23 = -173849415;
short arr_0 [22] ;
short arr_4 [25] ;
unsigned short arr_5 [25] ;
int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-18227;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-10956;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)22902;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -2092811551 : 468713300;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
