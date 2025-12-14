#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned long long int var_1 = 2680891916545908735ULL;
unsigned long long int var_2 = 8927021785603872806ULL;
unsigned long long int var_3 = 12292319079804513298ULL;
unsigned long long int var_4 = 12715266641245009682ULL;
unsigned char var_8 = (unsigned char)219;
long long int var_9 = -8879593292464606366LL;
signed char var_10 = (signed char)-107;
int zero = 0;
long long int var_11 = -3027602071887985461LL;
unsigned long long int var_12 = 1848096630623388133ULL;
unsigned long long int var_13 = 18355211590029255717ULL;
unsigned long long int var_14 = 14058004758170179154ULL;
unsigned short var_15 = (unsigned short)44319;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7193441473934902887LL;
unsigned long long int var_18 = 12454151164778542119ULL;
unsigned long long int var_19 = 15849280594485270349ULL;
signed char var_20 = (signed char)104;
long long int arr_1 [12] ;
signed char arr_2 [12] ;
_Bool arr_6 [20] [20] ;
signed char arr_8 [15] [15] ;
_Bool arr_13 [11] ;
long long int arr_3 [12] [12] ;
short arr_15 [11] ;
int arr_16 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 8260051685028818842LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = -3908547845050015391LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)12969 : (short)-22831;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 340322654 : -1279193209;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
