#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-8111;
unsigned long long int var_2 = 16279785249377115671ULL;
long long int var_5 = 2445494723926754614LL;
unsigned char var_6 = (unsigned char)159;
short var_7 = (short)-15561;
short var_8 = (short)-5645;
int var_9 = -388422528;
signed char var_10 = (signed char)-12;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2838152980U;
int var_13 = -1956859657;
int zero = 0;
long long int var_14 = -4208874682173297776LL;
short var_15 = (short)19713;
long long int var_16 = 2249300219308408733LL;
int var_17 = -715153433;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)19439;
unsigned long long int var_20 = 12604805901976147805ULL;
unsigned long long int var_21 = 11278980104801695831ULL;
_Bool var_22 = (_Bool)0;
unsigned char arr_1 [11] ;
long long int arr_5 [11] [11] [11] ;
signed char arr_6 [11] [11] ;
int arr_13 [12] ;
short arr_16 [19] [19] ;
long long int arr_17 [19] [19] ;
unsigned int arr_2 [11] ;
signed char arr_12 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_15 [12] ;
unsigned long long int arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -7040659617593646728LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = -744130602;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)20068 : (short)13138;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 1094668349945207284LL : 8547129590747526630LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1047712395U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 15404179602306685985ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 7793959127318213452ULL : 10483137063262162954ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
