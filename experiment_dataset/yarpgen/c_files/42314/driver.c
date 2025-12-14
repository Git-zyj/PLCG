#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 103499954U;
unsigned long long int var_4 = 16944678073056043666ULL;
unsigned long long int var_6 = 10750728128050230322ULL;
unsigned char var_8 = (unsigned char)23;
unsigned short var_9 = (unsigned short)23591;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)76;
unsigned int var_17 = 3778426371U;
int zero = 0;
unsigned char var_20 = (unsigned char)251;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)8267;
signed char var_24 = (signed char)-34;
unsigned int var_25 = 1307259997U;
short arr_0 [23] ;
unsigned int arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned int arr_6 [23] [23] ;
short arr_8 [23] [23] [23] ;
unsigned int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-29380;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 745819756U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4148027194U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 3229138944U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)23633;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 1481980608U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
