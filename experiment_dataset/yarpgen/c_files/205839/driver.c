#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2521220070U;
signed char var_2 = (signed char)-109;
signed char var_3 = (signed char)-14;
unsigned long long int var_4 = 8461026781953407231ULL;
signed char var_5 = (signed char)95;
long long int var_6 = 6221218194678344075LL;
unsigned char var_7 = (unsigned char)177;
long long int var_8 = -3274427895437354161LL;
int var_9 = 295870185;
unsigned int var_10 = 1490600258U;
int var_12 = 993260910;
int zero = 0;
unsigned short var_16 = (unsigned short)27799;
short var_17 = (short)26728;
int var_18 = 426101616;
signed char var_19 = (signed char)-94;
unsigned char var_20 = (unsigned char)140;
unsigned long long int var_21 = 2470378438334191061ULL;
unsigned char var_22 = (unsigned char)216;
short var_23 = (short)29971;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 9408033538493045171ULL;
int var_26 = 1648488837;
int var_27 = -1571865834;
int arr_10 [16] [16] [16] [16] ;
_Bool arr_11 [16] ;
int arr_17 [16] ;
short arr_18 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -1643699105;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -1130804880 : -342516295;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)5546 : (short)-11979;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
