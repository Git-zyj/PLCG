#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54194;
short var_1 = (short)11176;
int var_2 = -1090689215;
int var_4 = 466728056;
unsigned int var_6 = 2878679636U;
long long int var_8 = 5550299949467035900LL;
unsigned long long int var_9 = 12673063469651001822ULL;
unsigned short var_10 = (unsigned short)45744;
short var_12 = (short)805;
unsigned int var_13 = 1069512891U;
short var_14 = (short)8470;
int var_15 = -370018711;
int zero = 0;
unsigned int var_16 = 3175318154U;
unsigned long long int var_17 = 18333484694756089803ULL;
long long int var_18 = 2713754355237232404LL;
unsigned short var_19 = (unsigned short)5733;
short var_20 = (short)21073;
unsigned short arr_0 [15] ;
int arr_1 [15] [15] ;
unsigned int arr_2 [15] ;
int arr_4 [15] [15] [15] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)51003;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -1739027155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1585405601U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1669569674;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -8450000857556150965LL : -3619133034860639238LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
