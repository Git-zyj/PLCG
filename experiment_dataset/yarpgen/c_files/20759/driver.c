#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 117693530;
int var_1 = 1990622776;
int var_3 = 1941278393;
unsigned int var_4 = 781269584U;
_Bool var_5 = (_Bool)0;
int var_6 = -1991425279;
unsigned char var_8 = (unsigned char)34;
int var_9 = 67688748;
unsigned int var_10 = 100803257U;
long long int var_11 = -3473397985168188672LL;
unsigned char var_13 = (unsigned char)18;
long long int var_14 = -1780727048964805886LL;
int zero = 0;
int var_15 = 980349560;
unsigned int var_16 = 2983659736U;
int var_17 = -456603080;
unsigned char var_18 = (unsigned char)77;
int var_19 = 785057162;
int var_20 = 319514483;
int var_21 = -1084061566;
int var_22 = 1759856584;
long long int var_23 = -5954948608276779144LL;
int var_24 = 1432662467;
int var_25 = -1315945006;
int var_26 = 1307567274;
unsigned char var_27 = (unsigned char)121;
unsigned char var_28 = (unsigned char)164;
_Bool var_29 = (_Bool)1;
int var_30 = -1409973054;
unsigned int var_31 = 3859035732U;
long long int var_32 = 6650297245040470989LL;
unsigned int var_33 = 2460018733U;
long long int var_34 = 8847397316258627225LL;
unsigned int var_35 = 3429530418U;
int var_36 = 242424946;
unsigned int arr_0 [15] [15] ;
long long int arr_1 [15] ;
int arr_2 [15] ;
long long int arr_9 [14] [14] [14] [14] ;
long long int arr_10 [14] ;
long long int arr_11 [14] ;
unsigned int arr_12 [14] [14] [14] [14] ;
unsigned int arr_13 [14] [14] [14] [14] [14] ;
long long int arr_14 [14] [14] [14] [14] [14] ;
long long int arr_16 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_22 [14] [14] ;
int arr_25 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2639118945U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -6311290815739198865LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 508676590;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 344158951907086996LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = -1765486657758609336LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = -6567843851026809879LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 731676402U : 1770509818U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 3125043592U : 1457608614U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -4786607145786020494LL : -5893137291424491232LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4807536974975074049LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)151 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1093538913 : 787324976;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
