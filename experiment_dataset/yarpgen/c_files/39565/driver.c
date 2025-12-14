#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6543628783731398596ULL;
signed char var_1 = (signed char)108;
long long int var_2 = 4234111774409804059LL;
unsigned long long int var_3 = 5505529791402056034ULL;
unsigned int var_5 = 961447825U;
unsigned int var_6 = 1299015112U;
unsigned long long int var_7 = 6501850149299757524ULL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)116;
unsigned int var_13 = 1111991536U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)61158;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7613240259291426569LL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)7482;
unsigned int var_21 = 3053994392U;
long long int var_22 = -7767052072416896264LL;
unsigned long long int var_23 = 3968609273960143236ULL;
_Bool var_24 = (_Bool)0;
long long int var_25 = 6570703530530640311LL;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 1772867135U;
signed char var_28 = (signed char)-68;
signed char var_29 = (signed char)-59;
unsigned int var_30 = 1999246736U;
unsigned short var_31 = (unsigned short)46758;
_Bool arr_3 [11] [11] [11] ;
short arr_6 [11] [11] [11] [11] ;
unsigned long long int arr_13 [11] [11] ;
unsigned int arr_15 [12] ;
_Bool arr_17 [12] ;
signed char arr_18 [12] ;
_Bool arr_11 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-15245;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = 10378214346269215750ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 1656487022U : 807900703U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
