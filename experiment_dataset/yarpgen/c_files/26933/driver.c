#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned short var_2 = (unsigned short)42934;
long long int var_6 = 8578129401481118263LL;
long long int var_9 = -525431998416182024LL;
short var_13 = (short)17636;
int zero = 0;
long long int var_16 = -1947636192531583367LL;
long long int var_17 = -3792210919014929714LL;
short var_18 = (short)-32262;
long long int var_19 = 4311790148996043685LL;
unsigned short var_20 = (unsigned short)44213;
long long int var_21 = 6877965808644521231LL;
unsigned int arr_0 [14] [14] ;
short arr_2 [14] ;
short arr_3 [14] ;
unsigned char arr_4 [14] [14] [14] ;
short arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 4107221658U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-4333;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-1314;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)10264;
}

void checksum() {
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
