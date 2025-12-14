#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9345;
_Bool var_1 = (_Bool)0;
int var_2 = 76983743;
signed char var_4 = (signed char)-13;
short var_5 = (short)28356;
unsigned char var_6 = (unsigned char)106;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)177;
int var_10 = 188327690;
signed char var_11 = (signed char)54;
short var_12 = (short)-32435;
unsigned int var_13 = 2335393886U;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)17944;
unsigned int var_17 = 1819893067U;
short var_18 = (short)-20969;
unsigned char var_19 = (unsigned char)44;
signed char var_20 = (signed char)22;
unsigned int var_21 = 2551709242U;
signed char var_22 = (signed char)-103;
unsigned int arr_0 [14] [14] ;
short arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned int arr_3 [14] ;
unsigned int arr_4 [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned long long int arr_16 [14] [14] [14] [14] [14] ;
short arr_15 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 217911305U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-27335;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2474831561U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1969477850U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2823922839U : 57462743U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8389300549214902784ULL : 15906122060961181873ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 13108549608495901533ULL : 8649074128159195084ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-13301 : (short)-26852;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
