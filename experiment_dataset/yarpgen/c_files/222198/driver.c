#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
int var_2 = 2000455685;
int var_4 = -1732444145;
unsigned long long int var_5 = 13464751256645216876ULL;
unsigned long long int var_6 = 6950821607728093810ULL;
int var_7 = -1425113873;
unsigned char var_8 = (unsigned char)164;
_Bool var_9 = (_Bool)0;
unsigned long long int var_16 = 10486086501307642333ULL;
unsigned long long int var_18 = 15027084954846564945ULL;
unsigned long long int var_19 = 12725405456904801745ULL;
int zero = 0;
short var_20 = (short)3056;
int var_21 = 791692232;
signed char var_22 = (signed char)119;
unsigned long long int var_23 = 10621769030424600801ULL;
_Bool var_24 = (_Bool)1;
unsigned char arr_2 [10] [10] ;
short arr_6 [10] [10] ;
short arr_8 [10] ;
int arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-10641;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (short)-20673;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1774606369;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
