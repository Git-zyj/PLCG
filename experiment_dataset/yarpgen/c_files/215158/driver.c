#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 715250974630636236ULL;
int var_2 = 2099472571;
long long int var_3 = -8449538652567774218LL;
unsigned long long int var_4 = 482142042704433494ULL;
unsigned long long int var_5 = 7071561322232965312ULL;
unsigned long long int var_6 = 7023763598926681201ULL;
unsigned long long int var_7 = 7222726901070260526ULL;
unsigned char var_8 = (unsigned char)53;
long long int var_9 = 525824422199039070LL;
unsigned long long int var_10 = 4125836317613994055ULL;
int var_11 = 1200720414;
int var_12 = 1962417049;
int var_13 = 542598310;
int zero = 0;
unsigned short var_15 = (unsigned short)15659;
int var_16 = 356441010;
unsigned long long int var_17 = 6867522590055488514ULL;
unsigned char var_18 = (unsigned char)149;
unsigned long long int var_19 = 13858854422065627955ULL;
unsigned long long int var_20 = 2449205124864598272ULL;
unsigned long long int var_21 = 7744386193058167004ULL;
long long int var_22 = 5128455794821302066LL;
long long int var_23 = -8452711347856993996LL;
unsigned char var_24 = (unsigned char)88;
unsigned long long int var_25 = 8057994954407863744ULL;
unsigned short var_26 = (unsigned short)386;
long long int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
int arr_2 [17] ;
int arr_3 [17] ;
unsigned short arr_8 [17] ;
unsigned char arr_10 [17] ;
unsigned long long int arr_16 [17] [17] [17] ;
int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 9124567017502024790LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 165765785247119695ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -2079951826;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 491341169;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)22357;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 7079573905114778380ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = -231418464;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
