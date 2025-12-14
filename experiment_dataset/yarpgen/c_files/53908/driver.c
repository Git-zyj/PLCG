#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -950308452571889646LL;
long long int var_3 = -8720335563666973594LL;
unsigned long long int var_5 = 5267591124530917272ULL;
unsigned short var_6 = (unsigned short)26849;
unsigned short var_7 = (unsigned short)39344;
unsigned char var_8 = (unsigned char)128;
int zero = 0;
unsigned int var_10 = 2156015462U;
unsigned short var_11 = (unsigned short)30746;
long long int var_12 = 7702080760304936365LL;
long long int var_13 = 1642041180298402916LL;
long long int var_14 = -2001762959776176690LL;
unsigned short var_15 = (unsigned short)18400;
long long int var_16 = 6558075206351692736LL;
unsigned long long int var_17 = 14831165739896844872ULL;
long long int arr_0 [15] ;
long long int arr_3 [17] ;
unsigned int arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
unsigned long long int arr_6 [17] ;
unsigned char arr_11 [17] ;
unsigned long long int arr_2 [15] [15] ;
unsigned long long int arr_8 [17] ;
unsigned short arr_9 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -4174045997539481366LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1094185665026175307LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 879777623U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1603122451U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14850048710694166035ULL : 13086457575152976175ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 11741983260775277890ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 16840960988791466538ULL : 4925772375519212669ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)36155 : (unsigned short)51515;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
