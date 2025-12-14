#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)19;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)114;
short var_7 = (short)10112;
unsigned long long int var_9 = 512877750517819771ULL;
unsigned char var_10 = (unsigned char)47;
int zero = 0;
short var_14 = (short)-7231;
unsigned short var_15 = (unsigned short)47986;
int var_16 = -1958125453;
unsigned short var_17 = (unsigned short)20580;
unsigned long long int var_18 = 8061846663312448101ULL;
unsigned long long int arr_1 [14] ;
_Bool arr_2 [14] [14] ;
int arr_3 [14] [14] ;
unsigned long long int arr_5 [21] ;
unsigned long long int arr_6 [21] ;
unsigned char arr_9 [21] [21] ;
short arr_12 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 18432944944090898424ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 226089097;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 16699258724766613507ULL : 13659416761275243928ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 15453306527919984679ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)151 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-11389 : (short)-20299;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
