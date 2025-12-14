#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 813271797;
signed char var_4 = (signed char)13;
long long int var_5 = -8676612662098757407LL;
long long int var_6 = 2581444045779629090LL;
unsigned int var_7 = 2766885348U;
long long int var_8 = 6981908255644869839LL;
short var_9 = (short)-2157;
_Bool var_10 = (_Bool)0;
int var_12 = -553733414;
long long int var_13 = -4989669653149813951LL;
unsigned long long int var_14 = 6235028317979976347ULL;
int var_15 = 739051343;
unsigned int var_17 = 2766011500U;
signed char var_18 = (signed char)41;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3707043653878632929LL;
unsigned char var_21 = (unsigned char)251;
unsigned int var_22 = 3719702115U;
unsigned int var_23 = 1086428467U;
signed char arr_0 [10] [10] ;
short arr_1 [10] ;
int arr_2 [10] [10] [10] ;
unsigned int arr_3 [10] [10] ;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)20952;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1303269165;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 2966352895U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 446558036U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
