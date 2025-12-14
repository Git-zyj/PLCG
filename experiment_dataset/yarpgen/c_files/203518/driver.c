#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 505443792U;
unsigned char var_1 = (unsigned char)209;
unsigned int var_3 = 1155717199U;
unsigned long long int var_6 = 10452685742537522325ULL;
unsigned long long int var_7 = 15963035374570669058ULL;
unsigned int var_8 = 3373356784U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2406730559U;
short var_11 = (short)-32738;
int var_12 = -186337755;
unsigned int var_13 = 2293410497U;
short var_14 = (short)-26222;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)127;
unsigned int var_17 = 666544222U;
unsigned long long int var_18 = 3436184168263095285ULL;
unsigned long long int arr_0 [15] [15] ;
signed char arr_1 [15] ;
signed char arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2976009139827523198ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3787;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
