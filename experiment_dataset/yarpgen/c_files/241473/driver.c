#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30640;
short var_1 = (short)26480;
short var_2 = (short)-4607;
unsigned short var_3 = (unsigned short)51900;
unsigned int var_4 = 3916952343U;
unsigned char var_6 = (unsigned char)76;
unsigned long long int var_8 = 8474495576891810575ULL;
unsigned int var_9 = 1709328113U;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-57;
unsigned short var_12 = (unsigned short)30948;
unsigned int var_13 = 2813303314U;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7900624481242306631LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)22732;
unsigned int var_18 = 1921458778U;
unsigned short var_19 = (unsigned short)61976;
unsigned char arr_0 [16] ;
long long int arr_1 [16] [16] ;
long long int arr_3 [16] [16] ;
unsigned long long int arr_4 [16] ;
unsigned short arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 7684013281168541001LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 2881878745532486092LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 10891921348030548317ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)26519;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
