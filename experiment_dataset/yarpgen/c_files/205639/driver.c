#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10086;
_Bool var_1 = (_Bool)1;
long long int var_3 = -2713665860781648508LL;
short var_4 = (short)-17072;
int var_5 = 1236421748;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 11814411777228420549ULL;
unsigned short var_8 = (unsigned short)28775;
long long int var_9 = -3898905315597020405LL;
signed char var_10 = (signed char)5;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)22181;
unsigned short var_18 = (unsigned short)36265;
unsigned long long int var_19 = 1343094365252579336ULL;
long long int var_20 = 3187383626610143102LL;
unsigned char var_21 = (unsigned char)85;
long long int var_22 = -51391042944070502LL;
_Bool var_23 = (_Bool)0;
unsigned long long int arr_1 [12] ;
unsigned long long int arr_5 [12] [12] [12] [12] ;
long long int arr_8 [12] [12] [12] ;
int arr_15 [16] ;
unsigned long long int arr_17 [16] ;
_Bool arr_18 [16] [16] [16] ;
unsigned short arr_19 [16] [16] [16] ;
int arr_21 [16] ;
long long int arr_24 [16] [16] [16] ;
unsigned long long int arr_26 [16] [16] [16] [16] ;
unsigned short arr_30 [16] [16] [16] [16] [16] ;
unsigned long long int arr_13 [12] [12] [12] [12] [12] [12] [12] ;
short arr_22 [16] [16] ;
unsigned short arr_23 [16] ;
short arr_38 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 10616029976693715063ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 6095111898455694320ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2953126244320911923LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = 899960836;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 8207875334294365705ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)61137;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = -1079778746;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -4303502345570512456LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 11421824230603601221ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)31918;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 359359197737352064ULL : 6952371258931121917ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (short)-7764;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (unsigned short)56029;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_38 [i_0] = (short)-12097;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
