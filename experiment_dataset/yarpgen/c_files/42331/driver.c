#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 371740954734808647LL;
short var_1 = (short)9164;
long long int var_2 = 6737324908466947512LL;
long long int var_3 = 4028266746053287883LL;
unsigned char var_5 = (unsigned char)107;
unsigned short var_6 = (unsigned short)25641;
_Bool var_7 = (_Bool)1;
long long int var_8 = -2594225449202093291LL;
int var_9 = 8120688;
unsigned int var_11 = 1770939722U;
unsigned char var_12 = (unsigned char)76;
short var_13 = (short)19099;
long long int var_14 = 5311879596077961112LL;
long long int var_15 = -6590679008298971312LL;
unsigned char var_16 = (unsigned char)214;
int var_17 = 109785912;
long long int var_18 = 3948443800105573567LL;
long long int var_19 = -5456945636524161890LL;
int zero = 0;
unsigned int var_20 = 2238967803U;
unsigned int var_21 = 4174431102U;
unsigned short var_22 = (unsigned short)46015;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-23224;
unsigned char var_25 = (unsigned char)93;
unsigned char var_26 = (unsigned char)52;
unsigned short var_27 = (unsigned short)18269;
unsigned short var_28 = (unsigned short)6961;
long long int var_29 = -9213394402051481363LL;
unsigned short arr_0 [22] ;
unsigned short arr_1 [22] ;
signed char arr_4 [10] ;
unsigned short arr_5 [10] ;
long long int arr_6 [10] ;
long long int arr_10 [10] ;
_Bool arr_11 [10] [10] ;
unsigned char arr_2 [22] [22] ;
int arr_3 [22] ;
int arr_8 [10] [10] ;
unsigned char arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)23599;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)28177;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)10955;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -125461967547994642LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -6083454340819276399LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 909354822;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -344064889;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned char)117;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
