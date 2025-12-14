#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned short var_1 = (unsigned short)791;
unsigned short var_2 = (unsigned short)13539;
long long int var_3 = 4873042708516571182LL;
short var_6 = (short)22727;
_Bool var_7 = (_Bool)1;
int var_8 = -1205114566;
int var_9 = -1187636866;
unsigned long long int var_10 = 9564905782105674598ULL;
long long int var_11 = 7568043099684161803LL;
unsigned int var_12 = 3748373783U;
int zero = 0;
unsigned short var_14 = (unsigned short)19414;
long long int var_15 = 2554783274123044033LL;
unsigned long long int var_16 = 3828737614897599348ULL;
long long int var_17 = 6165568501066976597LL;
unsigned short var_18 = (unsigned short)54163;
unsigned int var_19 = 1685348081U;
int var_20 = -1645109627;
unsigned int arr_3 [25] [25] [25] ;
unsigned char arr_6 [25] ;
unsigned int arr_13 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 118462308U : 4103459423U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)7 : (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3790133415U : 636541029U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
