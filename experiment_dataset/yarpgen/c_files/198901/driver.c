#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
unsigned short var_3 = (unsigned short)13578;
unsigned int var_4 = 565687939U;
long long int var_5 = 6909146493156243193LL;
short var_6 = (short)24344;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 10284424613984804516ULL;
unsigned short var_11 = (unsigned short)17413;
long long int var_13 = -1514815120502504275LL;
int var_14 = 2103473734;
int zero = 0;
signed char var_17 = (signed char)48;
short var_18 = (short)2121;
short var_19 = (short)-11788;
unsigned short var_20 = (unsigned short)57339;
long long int var_21 = -916113236559673558LL;
unsigned char var_22 = (unsigned char)189;
unsigned char var_23 = (unsigned char)98;
unsigned char var_24 = (unsigned char)9;
int var_25 = -1874563788;
unsigned short var_26 = (unsigned short)62563;
unsigned short arr_0 [23] ;
long long int arr_1 [23] ;
long long int arr_2 [13] ;
short arr_4 [13] ;
short arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)6741;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 7652359951835490827LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3916835986364790513LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)18084;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)470 : (short)12193;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
