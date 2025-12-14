#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)113;
long long int var_5 = 246452780547304558LL;
unsigned long long int var_9 = 6693542022624301756ULL;
unsigned int var_12 = 2418317789U;
int var_13 = -1004780693;
unsigned long long int var_14 = 17113793157074201969ULL;
unsigned short var_15 = (unsigned short)59669;
long long int var_17 = -389718223353745057LL;
int zero = 0;
long long int var_20 = 5464889884219515152LL;
unsigned short var_21 = (unsigned short)1500;
unsigned int var_22 = 1134319508U;
int var_23 = -19640026;
unsigned int var_24 = 3955314756U;
unsigned int arr_0 [12] ;
unsigned short arr_2 [12] [12] ;
int arr_3 [12] [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 20395098U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)22475;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -25066166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 7275239681444714838ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
