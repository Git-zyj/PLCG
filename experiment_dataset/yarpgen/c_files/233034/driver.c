#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -327286193588685850LL;
int var_3 = -221628976;
int var_10 = -1634522256;
int zero = 0;
unsigned long long int var_19 = 6499843965961496433ULL;
signed char var_20 = (signed char)-76;
unsigned char var_21 = (unsigned char)235;
int var_22 = -641152325;
unsigned char var_23 = (unsigned char)40;
short var_24 = (short)7074;
unsigned char var_25 = (unsigned char)6;
signed char arr_0 [14] [14] ;
unsigned short arr_3 [14] [14] [14] ;
short arr_13 [12] [12] ;
long long int arr_9 [14] ;
short arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-79 : (signed char)38;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)1585;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (short)6351;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7363665649150381172LL : 4031603263579584236LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)-2443;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
