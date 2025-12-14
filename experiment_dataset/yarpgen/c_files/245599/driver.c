#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10155;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2463398632U;
int var_4 = 310602750;
unsigned short var_5 = (unsigned short)63333;
unsigned long long int var_6 = 812264488161269292ULL;
signed char var_7 = (signed char)82;
long long int var_8 = 6465132396373084901LL;
int var_9 = 218909576;
unsigned long long int var_10 = 6320975292226831011ULL;
short var_11 = (short)-24588;
long long int var_12 = -1032103429648796977LL;
unsigned char var_13 = (unsigned char)181;
signed char var_14 = (signed char)108;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -5406868602875675715LL;
signed char var_18 = (signed char)20;
unsigned int var_19 = 3642774244U;
signed char var_20 = (signed char)47;
short var_21 = (short)7383;
unsigned short var_22 = (unsigned short)47802;
signed char var_23 = (signed char)112;
unsigned short var_24 = (unsigned short)43507;
signed char var_25 = (signed char)-59;
int var_26 = -716952247;
short var_27 = (short)5267;
signed char arr_0 [22] ;
int arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
int arr_3 [22] ;
unsigned long long int arr_6 [22] ;
int arr_7 [22] ;
unsigned long long int arr_10 [12] ;
unsigned int arr_14 [12] [12] ;
unsigned long long int arr_18 [12] [12] ;
_Bool arr_19 [12] [12] ;
long long int arr_27 [15] [15] ;
unsigned int arr_28 [15] [15] ;
unsigned int arr_29 [15] ;
signed char arr_32 [15] [15] [15] ;
unsigned char arr_35 [15] ;
unsigned int arr_37 [15] [15] [15] [15] [15] [15] ;
int arr_39 [15] [15] [15] [15] [15] ;
int arr_40 [15] [15] [15] [15] [15] [15] [15] ;
short arr_8 [22] ;
unsigned short arr_22 [12] [12] ;
unsigned long long int arr_26 [12] ;
unsigned char arr_30 [15] [15] ;
unsigned long long int arr_41 [15] ;
unsigned short arr_42 [15] [15] ;
short arr_43 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)24 : (signed char)-59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1474388416;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3262535991U : 4270750723U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1802263338 : -1994375427;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 13782834982476601912ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -1331866483;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 13110983802204566318ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 4210594441U : 1189068550U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? 10939681974351241123ULL : 15495940166593800206ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = 5334373301276923546LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_28 [i_0] [i_1] = 1410914409U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = 2324645996U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_35 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2664355340U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = 11421511;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -984788209;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)20738 : (short)-19457;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)32647 : (unsigned short)57690;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 6171066423636133320ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? 3306912678152794917ULL : 13191345522706008214ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_42 [i_0] [i_1] = (unsigned short)53811;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_43 [i_0] = (short)-16652;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
