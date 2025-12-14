#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
short var_1 = (short)9598;
short var_2 = (short)31997;
unsigned int var_3 = 3140806467U;
int var_4 = 1618287310;
int var_5 = -1064030081;
short var_6 = (short)-2617;
unsigned short var_7 = (unsigned short)10048;
unsigned char var_8 = (unsigned char)91;
signed char var_10 = (signed char)103;
int zero = 0;
long long int var_11 = -142586585552842818LL;
unsigned int var_12 = 1070366110U;
int var_13 = -735886581;
unsigned char var_14 = (unsigned char)218;
signed char var_15 = (signed char)-122;
long long int var_16 = 5817468217912478004LL;
unsigned short var_17 = (unsigned short)17807;
int var_18 = 1712661319;
short arr_0 [11] [11] ;
signed char arr_1 [11] ;
int arr_3 [11] [11] ;
unsigned char arr_4 [11] ;
unsigned long long int arr_5 [11] ;
unsigned int arr_2 [11] ;
signed char arr_6 [11] ;
unsigned long long int arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-8957;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 257582354 : -1788309957;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 11035291522415721991ULL : 10020796206251897128ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3430105263U : 4048324210U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 7557877955350477582ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
