#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11643604253195848950ULL;
_Bool var_1 = (_Bool)1;
long long int var_2 = 7805206911675837147LL;
unsigned int var_3 = 1143576102U;
unsigned short var_4 = (unsigned short)13862;
unsigned int var_5 = 1205536459U;
unsigned short var_6 = (unsigned short)18471;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)107;
signed char var_9 = (signed char)14;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 14077704593038934857ULL;
int var_13 = 1171887483;
unsigned long long int var_15 = 16770160745508209440ULL;
unsigned char var_16 = (unsigned char)95;
unsigned short var_18 = (unsigned short)57521;
long long int var_19 = -1531482650944293089LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-91;
_Bool var_22 = (_Bool)0;
short var_23 = (short)24150;
_Bool var_24 = (_Bool)0;
long long int var_25 = -3351542653521309338LL;
unsigned long long int var_26 = 12094134952610394320ULL;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)75;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)1;
long long int var_31 = -8780622047540106861LL;
unsigned long long int var_32 = 15976398932602707996ULL;
long long int var_33 = 7600275462171384653LL;
long long int var_34 = -8587922375697204579LL;
unsigned long long int var_35 = 2912342781872230133ULL;
signed char arr_0 [21] [21] ;
unsigned int arr_1 [21] [21] ;
long long int arr_2 [18] ;
long long int arr_3 [18] ;
long long int arr_4 [18] [18] ;
unsigned char arr_5 [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
long long int arr_11 [18] [18] [18] ;
unsigned long long int arr_16 [22] ;
long long int arr_17 [22] ;
long long int arr_21 [12] ;
long long int arr_25 [24] ;
long long int arr_26 [24] [24] ;
unsigned char arr_27 [24] [24] ;
_Bool arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [18] ;
signed char arr_12 [18] [18] ;
long long int arr_13 [18] [18] ;
_Bool arr_14 [18] ;
_Bool arr_15 [18] ;
signed char arr_18 [22] [22] ;
int arr_22 [12] ;
int arr_23 [12] [12] ;
unsigned short arr_28 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 3265245940U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1890311538208511075LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3463611770648992525LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -5904839754373491569LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 862950350693113235ULL : 14578819430903202128ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1328747077294262428LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 11182320134743530623ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 2654946385852331664LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = 5115989487861372783LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = -8633718749780337321LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = 5072318082382971715LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7662810016032042739ULL : 11790293005750853184ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = -2673328462014106360LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)-75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = -800653525;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = -356066476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (unsigned short)14806;
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
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
