#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 100848091U;
unsigned int var_1 = 4138313988U;
unsigned long long int var_2 = 15356360814504447314ULL;
unsigned long long int var_4 = 229963126492442112ULL;
signed char var_6 = (signed char)-29;
unsigned int var_8 = 3471700632U;
int var_9 = 513394714;
int var_10 = 1261112021;
unsigned int var_11 = 2669995471U;
unsigned int var_12 = 1676306748U;
unsigned int var_13 = 581308811U;
int zero = 0;
signed char var_14 = (signed char)-109;
unsigned int var_15 = 2745560143U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)28206;
unsigned int var_18 = 851038817U;
signed char arr_1 [18] ;
signed char arr_2 [18] ;
unsigned int arr_6 [18] [18] [18] ;
unsigned int arr_8 [18] [18] ;
unsigned int arr_9 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3526468077U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 2419456188U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1779668013U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
