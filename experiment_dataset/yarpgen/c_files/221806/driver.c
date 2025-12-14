#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 1615405739876255664LL;
signed char var_4 = (signed char)-78;
short var_6 = (short)-22002;
signed char var_7 = (signed char)98;
long long int var_8 = -5972344321453360240LL;
unsigned char var_10 = (unsigned char)162;
unsigned char var_11 = (unsigned char)167;
unsigned short var_12 = (unsigned short)50550;
unsigned int var_13 = 4134932193U;
int var_16 = 534241174;
unsigned long long int var_17 = 2273939160117911010ULL;
int zero = 0;
int var_18 = 668600226;
unsigned char var_19 = (unsigned char)35;
int var_20 = 2100249707;
signed char var_21 = (signed char)21;
short var_22 = (short)-25765;
short var_23 = (short)32424;
signed char arr_3 [12] [12] ;
short arr_6 [12] ;
int arr_9 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)31844;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 620612337;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
