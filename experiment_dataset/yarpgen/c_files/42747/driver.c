#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 46945511;
unsigned long long int var_1 = 13518524127010733452ULL;
unsigned int var_2 = 2991516975U;
short var_3 = (short)13634;
unsigned long long int var_4 = 5703459697817205415ULL;
unsigned short var_5 = (unsigned short)43450;
long long int var_6 = 327191777959550336LL;
long long int var_8 = 2121972492565864669LL;
signed char var_9 = (signed char)-102;
long long int var_10 = -4147138787936858923LL;
unsigned long long int var_13 = 9276000132545595303ULL;
unsigned long long int var_17 = 1673358234317857162ULL;
int zero = 0;
unsigned int var_19 = 3244951673U;
unsigned char var_20 = (unsigned char)38;
unsigned long long int var_21 = 14105245235833321172ULL;
signed char var_22 = (signed char)124;
signed char var_23 = (signed char)124;
signed char var_24 = (signed char)-35;
long long int var_25 = -7396811183840085049LL;
long long int var_26 = -3354628637870667140LL;
short var_27 = (short)23182;
unsigned long long int var_28 = 7044829364012108684ULL;
unsigned long long int var_29 = 5177930603796867980ULL;
int var_30 = 2127785555;
long long int var_31 = 8673120513335382823LL;
unsigned int var_32 = 1851657153U;
int var_33 = 1433881797;
unsigned long long int var_34 = 15044259948538906180ULL;
unsigned int var_35 = 3173252326U;
long long int var_36 = -7703976602340753099LL;
long long int var_37 = -2181998116901772693LL;
unsigned int var_38 = 685296441U;
unsigned short var_39 = (unsigned short)28669;
unsigned long long int var_40 = 16803210858341478793ULL;
signed char var_41 = (signed char)-72;
unsigned short var_42 = (unsigned short)57339;
int var_43 = 712482684;
unsigned int arr_2 [19] ;
unsigned long long int arr_4 [20] ;
long long int arr_5 [20] ;
unsigned char arr_8 [19] ;
unsigned short arr_10 [19] ;
unsigned long long int arr_11 [19] ;
int arr_13 [19] [19] [19] ;
unsigned long long int arr_15 [19] [19] ;
_Bool arr_18 [19] [19] [19] [19] ;
unsigned char arr_21 [19] [19] [19] [19] ;
short arr_22 [19] [19] [19] ;
long long int arr_26 [19] [19] ;
long long int arr_27 [19] [19] [19] [19] ;
_Bool arr_28 [19] [19] [19] [19] ;
short arr_29 [19] ;
long long int arr_6 [20] ;
unsigned short arr_7 [20] ;
unsigned int arr_14 [19] ;
int arr_30 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4153952310U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1543651707095252672ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 8231859507357760307LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)59215;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 608533919838272993ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1399889789;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 3901963231121165397ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)12422;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = -8262955222841555768LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = -8094744674567976430LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (short)1012;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 8154272587608246001LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)49253;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 75500616U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 559349958;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
