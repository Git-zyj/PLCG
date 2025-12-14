#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 212984771;
unsigned long long int var_2 = 4845490501002359563ULL;
unsigned long long int var_3 = 1933874244108912635ULL;
short var_4 = (short)-12756;
unsigned short var_5 = (unsigned short)63827;
unsigned char var_6 = (unsigned char)7;
int var_7 = -1504553313;
_Bool var_8 = (_Bool)1;
short var_9 = (short)29202;
unsigned char var_10 = (unsigned char)225;
unsigned int var_11 = 228168987U;
unsigned char var_12 = (unsigned char)71;
long long int var_13 = -9079695167136383346LL;
unsigned char var_14 = (unsigned char)98;
unsigned short var_15 = (unsigned short)60791;
short var_16 = (short)25466;
int zero = 0;
long long int var_17 = -4109486072357974867LL;
short var_18 = (short)-28373;
_Bool var_19 = (_Bool)1;
long long int var_20 = 5305480468785691871LL;
unsigned char var_21 = (unsigned char)10;
unsigned char var_22 = (unsigned char)117;
unsigned short var_23 = (unsigned short)13367;
short var_24 = (short)-13491;
int var_25 = -605702750;
int var_26 = 933858958;
short var_27 = (short)-3911;
unsigned short var_28 = (unsigned short)28332;
short var_29 = (short)23444;
short var_30 = (short)12860;
short var_31 = (short)-1934;
signed char var_32 = (signed char)83;
unsigned long long int var_33 = 14230376412849640308ULL;
short var_34 = (short)-2289;
short var_35 = (short)-11182;
short var_36 = (short)-23178;
unsigned short arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
unsigned char arr_2 [23] ;
_Bool arr_3 [23] ;
_Bool arr_4 [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
short arr_8 [23] ;
short arr_15 [23] ;
unsigned short arr_18 [23] [23] [23] [23] ;
unsigned int arr_20 [23] [23] ;
short arr_22 [23] ;
short arr_24 [23] [23] [23] [23] [23] ;
short arr_25 [22] ;
short arr_5 [23] ;
int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)30917;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 3824100988U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 5079671041062554448ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)8974;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (short)719;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33030;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 130752589U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (short)844;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-6537 : (short)-29322;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = (short)-11395;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-6043;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 855442255 : 589819470;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
