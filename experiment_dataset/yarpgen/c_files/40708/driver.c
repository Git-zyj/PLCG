#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16946;
unsigned int var_1 = 3385022149U;
long long int var_2 = 4255798625480535554LL;
int var_3 = -1033651420;
short var_4 = (short)-133;
short var_5 = (short)-20633;
long long int var_9 = 8118954053243319327LL;
int var_11 = 58103897;
int var_13 = -2095411354;
long long int var_14 = 3097006477154949983LL;
unsigned int var_16 = 3340459414U;
int zero = 0;
unsigned char var_17 = (unsigned char)247;
unsigned char var_18 = (unsigned char)141;
unsigned int var_19 = 3256230674U;
long long int var_20 = 3230889667964006004LL;
unsigned long long int var_21 = 4035484208639279415ULL;
unsigned long long int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
_Bool arr_2 [21] ;
unsigned char arr_5 [17] [17] ;
long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 9428391465162370352ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3136082893871714418ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 2717436071263150763LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
