#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13175;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-5390;
short var_5 = (short)-2761;
unsigned char var_7 = (unsigned char)255;
short var_8 = (short)-21031;
unsigned int var_9 = 3580240379U;
int var_10 = 499745302;
int var_11 = -1406752777;
_Bool var_12 = (_Bool)1;
int var_13 = -814998947;
long long int var_14 = 3160838542006062746LL;
int zero = 0;
short var_15 = (short)-6512;
_Bool var_16 = (_Bool)0;
int var_17 = 1639430061;
unsigned char var_18 = (unsigned char)41;
unsigned int var_19 = 2680025134U;
unsigned int var_20 = 2740410318U;
short var_21 = (short)-22528;
unsigned long long int arr_5 [12] [12] ;
unsigned short arr_6 [12] [12] ;
unsigned char arr_7 [12] [12] [12] [12] ;
int arr_8 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2632187174617107761ULL : 2406122212416523313ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)25225;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1855851504;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
