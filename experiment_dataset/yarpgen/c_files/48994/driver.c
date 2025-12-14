#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29747;
unsigned long long int var_1 = 7158178127691297451ULL;
unsigned int var_2 = 3323284436U;
_Bool var_4 = (_Bool)0;
int var_5 = -468082417;
unsigned long long int var_7 = 4667808434144975454ULL;
unsigned short var_8 = (unsigned short)4289;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)4709;
unsigned long long int var_12 = 2139293417135349405ULL;
unsigned long long int var_15 = 2070080429682350982ULL;
long long int var_16 = -1504010460663474329LL;
unsigned long long int var_17 = 8856133675065914583ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)60798;
unsigned long long int var_19 = 1607218593354948083ULL;
unsigned short var_20 = (unsigned short)55767;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)53742;
unsigned long long int var_23 = 7142867241912314038ULL;
long long int var_24 = 6906573297948532926LL;
long long int var_25 = -4462434038025118264LL;
unsigned long long int var_26 = 1463881283583230378ULL;
unsigned short arr_0 [17] ;
unsigned short arr_2 [17] [17] ;
int arr_3 [17] ;
unsigned short arr_6 [17] [17] [17] [17] [17] [17] ;
int arr_7 [17] [17] [17] [17] ;
unsigned int arr_8 [17] ;
long long int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)21455;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)43246;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -609429142;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)30452;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 28018067;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 2362402431U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = -5955876325831601061LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
