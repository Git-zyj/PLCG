#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3182352641U;
unsigned short var_1 = (unsigned short)9047;
unsigned int var_2 = 4161191453U;
long long int var_3 = 1546915071803800804LL;
unsigned int var_4 = 2771517291U;
long long int var_5 = -6298079716051882147LL;
unsigned short var_6 = (unsigned short)16282;
signed char var_7 = (signed char)46;
signed char var_8 = (signed char)64;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1632672691U;
short var_12 = (short)29692;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4157575988U;
long long int var_15 = 2074276272811745394LL;
unsigned long long int var_16 = 1942977632647138755ULL;
unsigned int var_17 = 529811578U;
signed char var_18 = (signed char)-87;
unsigned long long int var_19 = 809560427045611751ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-1955;
unsigned int var_22 = 1339466198U;
unsigned long long int var_23 = 16395366489619954112ULL;
unsigned long long int var_24 = 14466078056725922084ULL;
unsigned char var_25 = (unsigned char)227;
long long int var_26 = 8784000348070512680LL;
unsigned int var_27 = 3349602419U;
long long int var_28 = 212595242775207887LL;
short var_29 = (short)-22158;
int arr_1 [17] ;
signed char arr_3 [17] ;
short arr_4 [12] [12] ;
unsigned int arr_5 [12] ;
int arr_6 [12] [12] ;
long long int arr_7 [12] [12] [12] ;
_Bool arr_8 [12] [12] ;
long long int arr_10 [12] [12] [12] ;
_Bool arr_11 [12] [12] [12] ;
unsigned int arr_16 [12] [12] [12] ;
_Bool arr_17 [12] ;
unsigned long long int arr_18 [12] [12] [12] ;
unsigned int arr_36 [12] ;
long long int arr_14 [12] [12] ;
unsigned long long int arr_15 [12] [12] ;
unsigned short arr_27 [12] ;
unsigned int arr_28 [12] [12] ;
int arr_34 [12] [12] ;
_Bool arr_38 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1983313828;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)12013;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 2175483512U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -252250601;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -9124885998409736013LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -9101462207814455895LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2265710195U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 6321896962420054677ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = 204448518U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 7382746811602926202LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 594810058870825800ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = (unsigned short)41151;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_28 [i_0] [i_1] = 3396494405U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_34 [i_0] [i_1] = 1603167458;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
