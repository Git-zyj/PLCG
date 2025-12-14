#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 738398260;
signed char var_1 = (signed char)119;
unsigned short var_2 = (unsigned short)58191;
short var_5 = (short)14266;
int var_6 = -158018817;
unsigned short var_7 = (unsigned short)11000;
unsigned char var_9 = (unsigned char)86;
int var_12 = 530412676;
unsigned short var_13 = (unsigned short)18808;
unsigned short var_16 = (unsigned short)894;
int zero = 0;
unsigned short var_18 = (unsigned short)45295;
long long int var_19 = 3320675548423785693LL;
long long int var_20 = 442737484450498605LL;
long long int var_21 = 3506770974717073364LL;
unsigned long long int var_22 = 7322283703079111599ULL;
signed char var_23 = (signed char)102;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)36668;
unsigned int arr_1 [10] [10] ;
unsigned char arr_2 [10] [10] ;
unsigned char arr_6 [10] ;
unsigned long long int arr_9 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_13 [10] ;
unsigned char arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 3214055272U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 5161002531558729772ULL : 6158288129712686750ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20136 : (unsigned short)11781;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)66 : (unsigned char)50;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
