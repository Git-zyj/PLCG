#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -1876393830;
long long int var_4 = -4923558619554855226LL;
int var_6 = -1797753731;
signed char var_7 = (signed char)64;
long long int var_8 = -1469659265388575937LL;
int zero = 0;
int var_10 = -1634475121;
short var_11 = (short)-12371;
unsigned char var_12 = (unsigned char)109;
long long int var_13 = 4320961035733175401LL;
unsigned short var_14 = (unsigned short)23142;
long long int var_15 = -6020897107589381338LL;
unsigned int var_16 = 2283401433U;
unsigned long long int arr_1 [23] ;
signed char arr_4 [23] [23] [23] ;
long long int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 15091635928437755128ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4348615036179989495LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
