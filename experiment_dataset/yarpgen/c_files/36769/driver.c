#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5449980120538992296LL;
unsigned int var_4 = 1850542464U;
unsigned int var_5 = 1141633169U;
unsigned char var_6 = (unsigned char)169;
long long int var_9 = -2635488629824656021LL;
unsigned char var_11 = (unsigned char)129;
long long int var_12 = -6726983092022805312LL;
short var_13 = (short)28447;
unsigned char var_15 = (unsigned char)137;
int var_16 = 449283675;
short var_17 = (short)-60;
int zero = 0;
unsigned char var_18 = (unsigned char)173;
long long int var_19 = 5586157182893059954LL;
unsigned short var_20 = (unsigned short)27119;
int var_21 = 1746991664;
unsigned int var_22 = 2088106131U;
signed char var_23 = (signed char)41;
int var_24 = -399773067;
int var_25 = -1971557654;
_Bool var_26 = (_Bool)0;
int var_27 = 650062580;
unsigned int var_28 = 894596990U;
int var_29 = 960385489;
unsigned long long int arr_1 [25] ;
unsigned short arr_3 [12] ;
int arr_4 [12] ;
unsigned short arr_5 [12] [12] ;
unsigned int arr_10 [12] ;
unsigned int arr_2 [25] ;
unsigned char arr_6 [12] ;
unsigned long long int arr_7 [12] ;
unsigned char arr_8 [12] [12] ;
unsigned int arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6247177622372332642ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)14507;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -561848799;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)8154;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 1585522693U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1769275566U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 6338145728245965448ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 2802545282U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
