#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3510517761817261620ULL;
short var_1 = (short)6051;
int var_2 = 232577931;
unsigned int var_3 = 2791799528U;
short var_4 = (short)-28883;
unsigned long long int var_6 = 4505170170731576837ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)131;
unsigned int var_12 = 1873304822U;
unsigned short var_14 = (unsigned short)10039;
unsigned char var_15 = (unsigned char)223;
short var_17 = (short)-29484;
int zero = 0;
long long int var_19 = 7059561119027761338LL;
unsigned short var_20 = (unsigned short)64312;
long long int var_21 = 1856662870282153662LL;
int var_22 = -208802568;
_Bool var_23 = (_Bool)0;
long long int var_24 = 3862531181036425390LL;
unsigned char var_25 = (unsigned char)233;
unsigned short var_26 = (unsigned short)59510;
signed char var_27 = (signed char)122;
unsigned long long int var_28 = 7785386658259086792ULL;
short var_29 = (short)2743;
_Bool var_30 = (_Bool)1;
long long int arr_0 [17] ;
long long int arr_1 [17] ;
short arr_2 [17] ;
unsigned short arr_3 [17] [17] ;
long long int arr_4 [17] ;
int arr_7 [17] [17] [17] [17] ;
signed char arr_9 [17] [17] ;
int arr_15 [17] [17] [17] [17] ;
short arr_20 [17] [17] [17] ;
unsigned char arr_23 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -928247708718422953LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -2914285885969506759LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-2112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)19169;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -4602077671784706125LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -269784965;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -710337548 : -982568666;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)-5281;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned char)249;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
