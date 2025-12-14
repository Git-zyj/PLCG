#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10293374565399169368ULL;
int var_2 = 1525048462;
int var_3 = -1561265385;
int var_6 = 1531752233;
unsigned int var_7 = 68430030U;
int var_8 = 889145880;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 10708558798749245782ULL;
unsigned long long int var_13 = 12292676967407460445ULL;
unsigned long long int var_14 = 11172060049514136782ULL;
int var_15 = 152396695;
int var_18 = 588978791;
unsigned char var_19 = (unsigned char)199;
int zero = 0;
unsigned int var_20 = 446869189U;
signed char var_21 = (signed char)94;
short var_22 = (short)3451;
unsigned int var_23 = 2624496453U;
int var_24 = 1483427935;
signed char var_25 = (signed char)72;
int var_26 = 359787849;
unsigned int var_27 = 3055352365U;
signed char var_28 = (signed char)108;
signed char var_29 = (signed char)8;
long long int var_30 = -8238391480949705591LL;
unsigned int var_31 = 3337114025U;
short var_32 = (short)-14770;
int var_33 = 2120337800;
unsigned char var_34 = (unsigned char)241;
int arr_0 [17] ;
short arr_4 [17] ;
signed char arr_5 [17] [17] [17] ;
short arr_6 [17] [17] ;
unsigned long long int arr_8 [17] ;
int arr_10 [17] [17] [17] ;
int arr_12 [17] [17] [17] ;
unsigned long long int arr_19 [17] [17] [17] [17] ;
unsigned int arr_20 [17] [17] [17] [17] [17] [17] [17] ;
unsigned int arr_2 [17] ;
unsigned long long int arr_22 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 139256321;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)19643;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-22814 : (short)22755;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 10828031122095790812ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1447268180 : -263656423;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 695043025;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4128359289881702187ULL : 2383437008225526555ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 934624952U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 20853694U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 17817596007849907313ULL : 8212380019157507254ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
