#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1419502660156931314LL;
int zero = 0;
unsigned long long int var_12 = 13775585231121393693ULL;
unsigned int var_13 = 945315855U;
signed char var_14 = (signed char)23;
long long int var_15 = 4631075561658117433LL;
short var_16 = (short)318;
signed char var_17 = (signed char)119;
signed char var_18 = (signed char)-83;
signed char var_19 = (signed char)-44;
unsigned int var_20 = 1332828137U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4202924676616932624LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 11426661489578818624ULL;
signed char var_25 = (signed char)28;
unsigned int var_26 = 3900974868U;
unsigned long long int var_27 = 725850684662430376ULL;
short var_28 = (short)-8547;
short var_29 = (short)-32067;
unsigned int var_30 = 4230512049U;
unsigned long long int var_31 = 7260310737643673507ULL;
unsigned char var_32 = (unsigned char)148;
unsigned char var_33 = (unsigned char)120;
int var_34 = 1905065932;
unsigned int var_35 = 579930229U;
unsigned long long int var_36 = 2811559462604621552ULL;
int var_37 = 1560954117;
unsigned int var_38 = 1977904017U;
unsigned long long int var_39 = 3811698044768497361ULL;
short var_40 = (short)-25098;
unsigned long long int var_41 = 8647400541436948254ULL;
unsigned char var_42 = (unsigned char)138;
short var_43 = (short)-14685;
int var_44 = 1003529515;
unsigned char var_45 = (unsigned char)176;
long long int var_46 = -7558007604337476227LL;
unsigned int var_47 = 1532358518U;
long long int var_48 = -2828952625108608060LL;
short var_49 = (short)3138;
unsigned short arr_0 [25] ;
signed char arr_1 [25] [25] ;
_Bool arr_5 [10] [10] ;
signed char arr_8 [15] [15] ;
unsigned char arr_9 [15] ;
int arr_11 [15] ;
short arr_12 [15] ;
unsigned int arr_13 [15] ;
short arr_14 [15] ;
unsigned int arr_15 [15] ;
unsigned long long int arr_16 [15] [15] [15] ;
int arr_17 [15] [15] [15] [15] ;
int arr_20 [18] ;
int arr_21 [18] [18] ;
unsigned int arr_22 [18] ;
short arr_24 [14] ;
unsigned char arr_25 [14] ;
unsigned char arr_26 [14] ;
int arr_27 [14] [14] [14] ;
unsigned char arr_30 [14] ;
long long int arr_31 [14] [14] ;
unsigned int arr_32 [14] [14] ;
unsigned int arr_33 [14] [14] ;
short arr_35 [14] [14] ;
unsigned int arr_37 [14] ;
long long int arr_38 [14] ;
signed char arr_40 [14] [14] [14] ;
unsigned char arr_42 [14] ;
unsigned short arr_47 [14] [14] ;
short arr_54 [14] [14] ;
unsigned short arr_2 [25] ;
short arr_3 [25] [25] ;
unsigned int arr_10 [15] ;
_Bool arr_18 [15] ;
unsigned int arr_19 [15] [15] [15] [15] ;
unsigned char arr_23 [18] ;
_Bool arr_28 [14] [14] ;
unsigned int arr_29 [14] [14] ;
unsigned int arr_34 [14] [14] [14] ;
long long int arr_44 [14] [14] [14] ;
_Bool arr_45 [14] [14] [14] [14] ;
signed char arr_50 [14] [14] ;
long long int arr_58 [14] [14] ;
short arr_59 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)16615;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -496493227;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (short)-30130;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 3738877174U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (short)3829;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 1562340442U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 10051520942761194331ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1944585391;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = -1912168875;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = -700395249;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = 3808034199U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (short)873;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -313445661 : -1454764915;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (unsigned char)220 : (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? -8810266210219318418LL : -2350477718393155865LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_32 [i_0] [i_1] = 563486252U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_33 [i_0] [i_1] = 642850613U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_35 [i_0] [i_1] = (short)29632;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = 4021409335U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_38 [i_0] = -7721856058778533299LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-77 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_42 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned short)6928;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_54 [i_0] [i_1] = (short)-30692;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)64249;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-914;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 2062475071U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3231631725U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? 3870378541U : 2480301484U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 937806329U : 2866906535U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5487351548419062634LL : 5524346875241600172LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_50 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-46 : (signed char)40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_58 [i_0] [i_1] = (i_1 % 2 == 0) ? 939963421917605483LL : -4866875485822178304LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)26456 : (short)9455;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_45 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_58 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
