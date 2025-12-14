#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2536621300U;
unsigned char var_1 = (unsigned char)216;
unsigned int var_2 = 1017011854U;
unsigned char var_3 = (unsigned char)67;
int var_4 = -1778809452;
long long int var_5 = 7624044960328307736LL;
long long int var_6 = 2413402211532702553LL;
int var_7 = 1831839020;
unsigned long long int var_8 = 1425794981039157500ULL;
unsigned long long int var_9 = 8876374887525206002ULL;
unsigned short var_10 = (unsigned short)46827;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1539302162U;
short var_13 = (short)12318;
signed char var_14 = (signed char)91;
int zero = 0;
unsigned int var_15 = 814032866U;
unsigned short var_16 = (unsigned short)58797;
unsigned short var_17 = (unsigned short)19250;
short var_18 = (short)4310;
unsigned short var_19 = (unsigned short)30594;
unsigned long long int var_20 = 397361415177444840ULL;
int var_21 = -1189819264;
unsigned int var_22 = 3841134480U;
signed char var_23 = (signed char)5;
signed char var_24 = (signed char)60;
unsigned char var_25 = (unsigned char)125;
unsigned int var_26 = 2348122395U;
long long int var_27 = -1877044044140632170LL;
signed char var_28 = (signed char)13;
short var_29 = (short)13218;
unsigned long long int var_30 = 11425054340423063097ULL;
long long int var_31 = -7807365325332581372LL;
int var_32 = 809202884;
unsigned long long int var_33 = 920992385934643153ULL;
unsigned long long int var_34 = 15397082859045262033ULL;
unsigned int var_35 = 230915127U;
long long int var_36 = -7415328664156966668LL;
unsigned int arr_0 [10] ;
long long int arr_2 [10] [10] ;
unsigned char arr_4 [10] [10] [10] ;
unsigned int arr_5 [10] ;
int arr_6 [10] [10] ;
unsigned int arr_8 [10] [10] ;
_Bool arr_10 [10] [10] [10] [10] ;
int arr_11 [10] [10] [10] ;
signed char arr_12 [10] ;
signed char arr_16 [10] [10] [10] ;
unsigned long long int arr_22 [10] [10] ;
signed char arr_29 [10] ;
unsigned long long int arr_31 [25] ;
signed char arr_32 [25] ;
unsigned int arr_3 [10] ;
unsigned short arr_14 [10] [10] [10] [10] ;
unsigned char arr_18 [10] [10] [10] ;
unsigned short arr_21 [10] [10] ;
unsigned long long int arr_27 [10] [10] [10] ;
unsigned char arr_30 [10] ;
unsigned long long int arr_35 [25] [25] [25] ;
unsigned long long int arr_36 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1690968944U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 5961548743880465489LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2572836109U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -1142693773;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 2003649232U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 694341434;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = 12684373364209703788ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = 7435510944035561325ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1923853588U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)55955;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)47361;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 2280604521587853872ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 14040051707175739989ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = 427678300628017049ULL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
