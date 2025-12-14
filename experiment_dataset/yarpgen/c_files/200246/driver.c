#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9280;
int var_1 = -1409609968;
int var_2 = -846054101;
unsigned char var_5 = (unsigned char)118;
_Bool var_7 = (_Bool)1;
unsigned char var_15 = (unsigned char)123;
unsigned int var_16 = 1999923469U;
int zero = 0;
unsigned long long int var_17 = 2662774724345697530ULL;
int var_18 = 373249792;
int var_19 = -1522081334;
int var_20 = 1671770012;
int var_21 = -1568294014;
short var_22 = (short)17175;
unsigned long long int var_23 = 13628386258606198505ULL;
unsigned long long int var_24 = 12087134172437279042ULL;
unsigned int arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 517043384U : 757335418U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3588011258U : 4202956726U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1141812294U : 4036806089U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
