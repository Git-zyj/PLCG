#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1534044783;
long long int var_3 = -3618041613024476364LL;
unsigned char var_4 = (unsigned char)237;
long long int var_5 = 6424283771887220711LL;
unsigned char var_10 = (unsigned char)151;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-548;
int var_15 = -899397939;
_Bool var_16 = (_Bool)0;
signed char var_18 = (signed char)-65;
int zero = 0;
signed char var_19 = (signed char)-127;
unsigned short var_20 = (unsigned short)10937;
long long int var_21 = 8797204685355304994LL;
_Bool var_22 = (_Bool)0;
int var_23 = 1975595607;
signed char var_24 = (signed char)84;
unsigned char var_25 = (unsigned char)236;
int arr_0 [14] [14] ;
unsigned short arr_1 [14] [14] ;
short arr_4 [14] ;
long long int arr_5 [14] ;
unsigned char arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 1965365336;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)6749;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-24801;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -2747114461817096359LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)232;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
