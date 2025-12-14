#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5225556233610507353ULL;
unsigned long long int var_4 = 12233767774810486036ULL;
unsigned long long int var_7 = 3493069588142498790ULL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_16 = (short)-22787;
unsigned short var_17 = (unsigned short)56721;
int zero = 0;
long long int var_19 = -8083181353561301073LL;
signed char var_20 = (signed char)63;
unsigned short var_21 = (unsigned short)37123;
unsigned int var_22 = 2551625963U;
unsigned int var_23 = 1083958954U;
signed char var_24 = (signed char)-26;
unsigned char var_25 = (unsigned char)118;
unsigned long long int var_26 = 16625869371845191337ULL;
unsigned short var_27 = (unsigned short)716;
long long int var_28 = 4842220181016182275LL;
signed char arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned long long int arr_2 [23] [23] ;
unsigned short arr_4 [16] [16] ;
unsigned char arr_5 [16] ;
_Bool arr_3 [23] ;
unsigned char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3238846181U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 10467140148211847839ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)55514;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)195;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
