#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
signed char var_1 = (signed char)70;
signed char var_3 = (signed char)106;
short var_4 = (short)-19343;
long long int var_5 = 7442244911830702713LL;
unsigned int var_6 = 3330572415U;
_Bool var_7 = (_Bool)0;
int var_8 = -1658287713;
unsigned char var_9 = (unsigned char)136;
short var_10 = (short)-20360;
int zero = 0;
short var_15 = (short)-29525;
unsigned int var_16 = 3665870501U;
unsigned long long int var_17 = 8622176560592653106ULL;
signed char var_18 = (signed char)-111;
long long int var_19 = 6083973909781338527LL;
short var_20 = (short)-11763;
unsigned long long int var_21 = 8658740409372370835ULL;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1061688178U;
unsigned short arr_0 [24] ;
short arr_1 [24] ;
signed char arr_3 [24] ;
_Bool arr_4 [24] ;
short arr_5 [24] ;
unsigned short arr_6 [24] ;
unsigned char arr_14 [25] ;
unsigned int arr_17 [25] ;
unsigned char arr_2 [24] [24] ;
short arr_8 [24] ;
short arr_9 [24] ;
long long int arr_18 [25] [25] ;
int arr_19 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)34323;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)30149;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-102 : (signed char)-45;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)24426;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)37940;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 3832768057U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)-15845;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)3073;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = 7349544443640953309LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = -1374728180;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
