#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 141268099;
unsigned long long int var_2 = 9662596775445082144ULL;
unsigned long long int var_5 = 9720001396187140151ULL;
unsigned long long int var_7 = 5847996591138627340ULL;
unsigned long long int var_8 = 18321725305390052443ULL;
long long int var_11 = 4321043773647009626LL;
int zero = 0;
unsigned long long int var_13 = 8613462941525997815ULL;
int var_14 = -2000077737;
int var_15 = -462326021;
signed char var_16 = (signed char)-30;
long long int var_17 = -2994185116758941521LL;
unsigned int var_18 = 1353157733U;
long long int var_19 = 1951960298594294184LL;
unsigned long long int var_20 = 3277958487881505906ULL;
unsigned long long int var_21 = 14688529399845913764ULL;
long long int var_22 = 667914140991717545LL;
long long int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
short arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
_Bool arr_6 [13] [13] ;
long long int arr_8 [13] [13] [13] ;
unsigned long long int arr_10 [17] ;
unsigned long long int arr_3 [13] ;
long long int arr_9 [13] ;
unsigned long long int arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 7096497644609618662LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 5387543718039675296ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-20959;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 3196184290U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2493301936770943530LL : -5208384572880932787LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 12411869782197905161ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1268201391231498663ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -7375228385053274991LL : -7385840439298448868LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 4688128219547282302ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
