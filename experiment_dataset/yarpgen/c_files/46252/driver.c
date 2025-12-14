#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5992906291950255183LL;
unsigned short var_1 = (unsigned short)43366;
unsigned int var_2 = 4198840783U;
unsigned long long int var_3 = 2362906053726590202ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1476063798950427737LL;
unsigned long long int var_7 = 3099196296630034418ULL;
signed char var_8 = (signed char)27;
unsigned short var_9 = (unsigned short)54748;
signed char var_13 = (signed char)-97;
unsigned char var_16 = (unsigned char)149;
unsigned int var_18 = 2866775199U;
int zero = 0;
unsigned long long int var_19 = 5490575696072577830ULL;
unsigned short var_20 = (unsigned short)47034;
unsigned int var_21 = 652285116U;
long long int var_22 = 6767265433005924491LL;
unsigned short var_23 = (unsigned short)18809;
signed char var_24 = (signed char)68;
unsigned long long int var_25 = 15789715360554493405ULL;
unsigned short var_26 = (unsigned short)23493;
short var_27 = (short)-9896;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned int arr_2 [19] ;
short arr_4 [19] [19] ;
unsigned long long int arr_5 [19] ;
unsigned short arr_6 [19] [19] [19] ;
unsigned long long int arr_7 [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] [19] ;
short arr_9 [19] [19] [19] [19] ;
signed char arr_10 [19] [19] [19] ;
short arr_12 [19] [19] [19] [19] ;
unsigned int arr_13 [19] [19] [19] [19] [19] ;
long long int arr_14 [19] [19] [19] [19] [19] ;
unsigned int arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2916368577131759307ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3548779828808188598ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 3692564800U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (short)10277;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 18414388709935893164ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)48250;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 7084452881512127691ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 17895512983789827753ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)27204;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)7902;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 1302136018U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = -5302361053119123172LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 2438538533U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
