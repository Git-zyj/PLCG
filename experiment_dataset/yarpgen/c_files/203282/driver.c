#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned int var_1 = 78510426U;
short var_2 = (short)13360;
unsigned long long int var_3 = 10080364495271110882ULL;
unsigned int var_4 = 3420430095U;
int var_5 = 2111225955;
unsigned long long int var_6 = 9300079632292313611ULL;
unsigned long long int var_7 = 1415404460828712766ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-13233;
signed char var_11 = (signed char)82;
unsigned char var_12 = (unsigned char)6;
unsigned int var_14 = 3101251130U;
int var_15 = -1135553485;
int var_16 = -769304502;
signed char var_17 = (signed char)30;
int zero = 0;
unsigned int var_18 = 3816214962U;
unsigned char var_19 = (unsigned char)90;
unsigned long long int var_20 = 12112137312177239747ULL;
signed char var_21 = (signed char)-75;
int var_22 = -1138276407;
short var_23 = (short)26000;
unsigned long long int var_24 = 5131543447530487355ULL;
_Bool arr_0 [22] [22] ;
short arr_1 [22] ;
unsigned int arr_5 [20] ;
signed char arr_6 [20] [20] ;
short arr_9 [20] [20] [20] ;
signed char arr_10 [20] [20] [20] [20] ;
short arr_2 [22] [22] ;
int arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-5245;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 838537642U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)24487;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)10858;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 1452128478;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
