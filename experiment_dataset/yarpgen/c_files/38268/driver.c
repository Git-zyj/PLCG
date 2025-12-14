#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)154;
unsigned short var_4 = (unsigned short)36128;
unsigned long long int var_5 = 913905854831623598ULL;
unsigned short var_8 = (unsigned short)4088;
signed char var_9 = (signed char)-102;
signed char var_11 = (signed char)-32;
unsigned long long int var_12 = 15502034981362473668ULL;
unsigned short var_13 = (unsigned short)32289;
int zero = 0;
signed char var_15 = (signed char)41;
short var_16 = (short)4583;
int var_17 = 2075027830;
signed char var_18 = (signed char)116;
signed char var_19 = (signed char)87;
unsigned short var_20 = (unsigned short)58767;
signed char var_21 = (signed char)87;
unsigned short arr_4 [20] ;
unsigned long long int arr_5 [20] [20] ;
unsigned char arr_6 [20] ;
unsigned short arr_7 [20] [20] [20] [20] ;
unsigned long long int arr_12 [20] [20] [20] [20] [20] ;
unsigned short arr_14 [20] [20] [20] [20] ;
short arr_15 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)42643;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 643689974428043092ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10241;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 14075468303758363634ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)24133 : (unsigned short)23461;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-3712 : (short)-11219;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
