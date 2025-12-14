#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6757469437213915356LL;
unsigned short var_1 = (unsigned short)12969;
unsigned short var_3 = (unsigned short)23826;
unsigned short var_4 = (unsigned short)62924;
unsigned short var_5 = (unsigned short)9061;
unsigned short var_6 = (unsigned short)64092;
long long int var_7 = -432757451952185536LL;
long long int var_8 = -2245928594088765775LL;
signed char var_9 = (signed char)103;
signed char var_10 = (signed char)-68;
signed char var_12 = (signed char)42;
int zero = 0;
long long int var_13 = 6516563863299096139LL;
unsigned short var_14 = (unsigned short)31236;
unsigned short var_15 = (unsigned short)23799;
long long int var_16 = 4493605551637731149LL;
long long int var_17 = 4212002519900419805LL;
long long int var_18 = 5140912212684577241LL;
unsigned short var_19 = (unsigned short)579;
unsigned short var_20 = (unsigned short)37594;
unsigned short var_21 = (unsigned short)65002;
long long int var_22 = -532232993133318261LL;
long long int var_23 = 8382913143075404499LL;
unsigned short var_24 = (unsigned short)9881;
signed char var_25 = (signed char)-39;
long long int var_26 = -8693732706649571403LL;
unsigned short var_27 = (unsigned short)42206;
unsigned short var_28 = (unsigned short)20375;
unsigned short var_29 = (unsigned short)42817;
unsigned short var_30 = (unsigned short)61459;
unsigned short arr_1 [17] ;
unsigned short arr_6 [17] [17] ;
unsigned short arr_10 [16] ;
unsigned short arr_16 [16] [16] ;
long long int arr_18 [16] [16] ;
unsigned short arr_23 [16] ;
long long int arr_26 [16] [16] [16] [16] ;
signed char arr_28 [16] [16] [16] ;
signed char arr_32 [16] [16] ;
long long int arr_3 [17] ;
unsigned short arr_20 [16] [16] [16] ;
signed char arr_30 [16] [16] [16] [16] [16] ;
unsigned short arr_31 [16] [16] [16] [16] [16] ;
long long int arr_36 [16] [16] ;
signed char arr_37 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)3227;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)28387;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)313;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)20856 : (unsigned short)5551;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = -5532884130210219034LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (unsigned short)44197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = -5552886232157978474LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)-32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -7644870557906988820LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)55072 : (unsigned short)46286;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)41 : (signed char)14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)28496 : (unsigned short)10382;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_36 [i_0] [i_1] = -816398875331124341LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = (signed char)22;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
