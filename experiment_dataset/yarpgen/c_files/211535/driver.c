#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9091792787741296266LL;
unsigned char var_1 = (unsigned char)177;
unsigned char var_2 = (unsigned char)24;
signed char var_3 = (signed char)-71;
long long int var_4 = -7194353477119191281LL;
int var_6 = -1890813522;
unsigned char var_7 = (unsigned char)155;
unsigned char var_8 = (unsigned char)39;
signed char var_9 = (signed char)-47;
long long int var_10 = -313926675884827872LL;
unsigned char var_11 = (unsigned char)226;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15732864918253670277ULL;
unsigned long long int var_15 = 13287894383203629357ULL;
long long int var_16 = -2043046613615951548LL;
int var_17 = 579045152;
unsigned char var_18 = (unsigned char)9;
long long int var_19 = -3972287691352705855LL;
int zero = 0;
signed char var_20 = (signed char)-44;
long long int var_21 = 1213960632090283897LL;
unsigned char var_22 = (unsigned char)254;
signed char var_23 = (signed char)-26;
unsigned char var_24 = (unsigned char)46;
signed char var_25 = (signed char)-82;
unsigned char var_26 = (unsigned char)199;
int var_27 = -741328843;
unsigned char var_28 = (unsigned char)88;
long long int var_29 = 2703487512547406692LL;
unsigned char var_30 = (unsigned char)32;
_Bool var_31 = (_Bool)1;
long long int var_32 = -4714100493189324348LL;
unsigned char arr_1 [13] ;
long long int arr_2 [13] [13] [13] ;
unsigned long long int arr_3 [13] ;
_Bool arr_4 [13] [13] [13] ;
signed char arr_6 [13] ;
long long int arr_7 [13] [13] [13] [13] [13] ;
int arr_8 [13] [13] [13] [13] ;
unsigned short arr_10 [13] [13] [13] [13] [13] [13] ;
signed char arr_12 [13] [13] [13] [13] [13] ;
unsigned char arr_13 [13] [13] [13] [13] [13] ;
int arr_16 [25] [25] ;
int arr_18 [25] ;
unsigned int arr_11 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_14 [13] ;
int arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 6955730218203054690LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 6317721358942880437ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 6442296655400750463LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 230568406;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)51697;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = -1497525768;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 1698505603;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2759962941U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)28395;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 401769719;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
