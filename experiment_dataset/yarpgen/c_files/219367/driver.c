#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned short var_1 = (unsigned short)50432;
signed char var_2 = (signed char)108;
unsigned char var_3 = (unsigned char)69;
signed char var_4 = (signed char)83;
unsigned int var_5 = 2306552206U;
short var_6 = (short)22290;
int var_7 = 114959979;
unsigned short var_8 = (unsigned short)45659;
long long int var_10 = -170737008239860725LL;
unsigned char var_12 = (unsigned char)245;
int zero = 0;
unsigned int var_13 = 4098232789U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11900427012012095429ULL;
unsigned char var_16 = (unsigned char)3;
signed char var_17 = (signed char)-36;
unsigned long long int var_18 = 10618809669811611227ULL;
long long int var_19 = -152890938591899117LL;
unsigned int var_20 = 3307160989U;
long long int var_21 = 2501164740754050714LL;
int var_22 = -1493928875;
int var_23 = 1153605178;
unsigned long long int var_24 = 15506197900159055143ULL;
signed char var_25 = (signed char)108;
signed char var_26 = (signed char)86;
unsigned int var_27 = 2403859307U;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)43160;
short var_30 = (short)10278;
unsigned char var_31 = (unsigned char)210;
signed char var_32 = (signed char)-79;
long long int var_33 = -7823570547178714335LL;
long long int var_34 = -467701189358436422LL;
unsigned long long int var_35 = 2584828622286585473ULL;
_Bool var_36 = (_Bool)0;
unsigned int var_37 = 3050574544U;
_Bool arr_1 [16] [16] ;
unsigned int arr_2 [16] ;
short arr_3 [16] ;
long long int arr_5 [16] ;
short arr_7 [16] ;
short arr_8 [16] [16] [16] ;
short arr_9 [16] [16] ;
long long int arr_10 [19] ;
unsigned long long int arr_11 [19] ;
short arr_12 [19] [19] ;
unsigned long long int arr_15 [19] [19] ;
_Bool arr_17 [19] [19] ;
signed char arr_18 [19] ;
unsigned char arr_19 [19] ;
int arr_21 [19] [19] ;
int arr_25 [25] [25] ;
unsigned char arr_27 [25] ;
signed char arr_28 [25] ;
signed char arr_34 [24] ;
long long int arr_35 [24] ;
unsigned short arr_6 [16] ;
_Bool arr_13 [19] [19] ;
unsigned int arr_14 [19] [19] ;
short arr_20 [19] [19] ;
unsigned long long int arr_23 [19] ;
_Bool arr_24 [19] ;
unsigned int arr_29 [25] ;
_Bool arr_36 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 3310009494U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)5599;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -6985336282282582015LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)11971;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-25630;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-13744;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = -8684911002044291686LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 9578417272199068867ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (short)20783;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 12397881944042248310ULL : 9664327709119233104ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = -1661292562;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = 1750499249;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = -2593252269546940398LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)19679;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 1210895766U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-25924 : (short)-10761;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = 7666128586863075455ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 127403280U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_36 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
