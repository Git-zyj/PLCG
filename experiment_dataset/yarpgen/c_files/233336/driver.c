#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 642202151;
signed char var_1 = (signed char)-112;
unsigned short var_2 = (unsigned short)34975;
unsigned int var_3 = 2554472706U;
unsigned short var_4 = (unsigned short)43471;
unsigned long long int var_5 = 3836176991798008803ULL;
unsigned long long int var_6 = 14285134253258338180ULL;
long long int var_7 = 1285022547306960516LL;
unsigned long long int var_8 = 6563218285161805878ULL;
short var_9 = (short)20026;
short var_10 = (short)22751;
int zero = 0;
unsigned long long int var_11 = 3477911300299425573ULL;
unsigned int var_12 = 4163371770U;
unsigned char var_13 = (unsigned char)95;
unsigned long long int var_14 = 12800602545869679474ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)199;
unsigned long long int var_17 = 16419596789588310003ULL;
unsigned long long int var_18 = 9716704995829495727ULL;
signed char var_19 = (signed char)26;
unsigned short var_20 = (unsigned short)38902;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)52;
signed char var_23 = (signed char)-11;
unsigned int var_24 = 3911679742U;
short var_25 = (short)-12693;
signed char var_26 = (signed char)71;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 3902221730279878410ULL;
long long int var_29 = -6169454183592120159LL;
unsigned short var_30 = (unsigned short)53945;
long long int var_31 = 7844621365332386181LL;
long long int var_32 = -5708380882091593396LL;
short arr_2 [21] [21] ;
int arr_9 [21] [21] [21] ;
unsigned long long int arr_12 [21] ;
unsigned long long int arr_25 [21] ;
signed char arr_29 [21] ;
_Bool arr_30 [21] [21] [21] ;
long long int arr_37 [21] [21] [21] [21] ;
short arr_38 [21] [21] ;
unsigned long long int arr_49 [22] ;
unsigned int arr_57 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)271;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 274067332;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 15431719893728268786ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = 7962579703451081379ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = -5499619305106188293LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_38 [i_0] [i_1] = (short)11505;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_49 [i_0] = 15563820472302464564ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_57 [i_0] = (i_0 % 2 == 0) ? 1673123802U : 2001782920U;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_57 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
