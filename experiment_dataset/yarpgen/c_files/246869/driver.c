#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 7632703423173808009LL;
long long int var_3 = 2455654782217471085LL;
long long int var_4 = 2893287815300044892LL;
unsigned char var_7 = (unsigned char)24;
long long int var_8 = -9126011742067010273LL;
short var_9 = (short)27444;
long long int var_10 = -7363943357117263271LL;
short var_12 = (short)26895;
short var_13 = (short)13508;
long long int var_14 = -2324373189632882539LL;
unsigned long long int var_15 = 15312319494219241130ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7614088749859472572LL;
short var_18 = (short)-26645;
long long int var_19 = -6856151820018147904LL;
short var_20 = (short)-28423;
long long int var_21 = -1187817659641528999LL;
short var_22 = (short)-11666;
long long int var_23 = 6735457677865684175LL;
unsigned long long int var_24 = 199685723458236264ULL;
short var_25 = (short)-13111;
short var_26 = (short)19808;
short var_27 = (short)27228;
unsigned long long int var_28 = 3364946498404804519ULL;
short var_29 = (short)3567;
long long int var_30 = -2230936113533096082LL;
short var_31 = (short)-8213;
short arr_0 [18] ;
short arr_2 [18] [18] ;
long long int arr_3 [18] [18] ;
short arr_4 [20] ;
short arr_9 [12] [12] ;
long long int arr_15 [12] [12] [12] [12] ;
long long int arr_21 [16] [16] ;
unsigned char arr_24 [16] [16] ;
long long int arr_20 [12] [12] [12] ;
short arr_23 [16] ;
short arr_26 [16] [16] ;
_Bool arr_27 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-7355;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-10927;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1488453916249449331LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-18309;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)19445;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5442044049510284266LL : -3123833188910011125LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = 5046053539272152010LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1687299780090812330LL : -7911121797616501629LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (short)6057;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = (short)-16849;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
