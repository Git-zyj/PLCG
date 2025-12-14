#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -870889952;
unsigned char var_2 = (unsigned char)169;
_Bool var_3 = (_Bool)1;
long long int var_4 = -3530374829366623572LL;
unsigned long long int var_5 = 3684099698529978701ULL;
unsigned char var_7 = (unsigned char)192;
unsigned int var_11 = 1726053045U;
int var_13 = -1747511479;
long long int var_14 = 8978358333305121060LL;
int zero = 0;
unsigned short var_15 = (unsigned short)29841;
int var_16 = 241494436;
int var_17 = 1131478775;
short var_18 = (short)-31851;
long long int var_19 = -1842778046692382553LL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)13454;
unsigned long long int var_22 = 15355659514638878699ULL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 12553540646356464359ULL;
unsigned short var_25 = (unsigned short)28638;
signed char var_26 = (signed char)93;
unsigned long long int var_27 = 6476884874599797380ULL;
unsigned long long int var_28 = 6590581784816378832ULL;
long long int var_29 = -5187900149967722160LL;
short arr_0 [11] ;
int arr_1 [11] [11] ;
unsigned short arr_7 [11] ;
int arr_10 [23] ;
unsigned int arr_12 [23] ;
unsigned short arr_18 [23] [23] [23] ;
long long int arr_21 [23] [23] [23] [23] ;
long long int arr_26 [23] ;
short arr_28 [23] [23] [23] [23] ;
unsigned short arr_33 [11] [11] ;
signed char arr_4 [11] ;
int arr_9 [11] ;
unsigned int arr_30 [23] ;
unsigned int arr_38 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)26030;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -123118867;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)25112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 1319250531;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 2662262895U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned short)9461;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -7544723543864093169LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_26 [i_0] = -6680166150433737357LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)16265;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)16167;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = -1702057606;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = 1246774926U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = 773740213U;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
