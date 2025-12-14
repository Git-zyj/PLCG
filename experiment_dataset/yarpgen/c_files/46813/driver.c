#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28238;
signed char var_1 = (signed char)-118;
unsigned char var_6 = (unsigned char)213;
int var_8 = -1742364923;
unsigned long long int var_10 = 6497587843093932857ULL;
unsigned long long int var_11 = 18429538493358407170ULL;
long long int var_14 = 7959541473345989483LL;
unsigned short var_15 = (unsigned short)33794;
unsigned long long int var_18 = 1320649250698572800ULL;
int zero = 0;
unsigned long long int var_20 = 14899237238651909669ULL;
signed char var_21 = (signed char)73;
unsigned int var_22 = 3789672134U;
signed char var_23 = (signed char)-20;
unsigned short var_24 = (unsigned short)58460;
short var_25 = (short)-26526;
short arr_0 [24] [24] ;
unsigned short arr_2 [24] [24] ;
unsigned long long int arr_3 [24] ;
short arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-904;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)29384;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 10075351983049473320ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)31329;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
