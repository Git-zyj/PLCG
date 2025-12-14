#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1570877019;
short var_5 = (short)-3661;
int var_7 = 1672155077;
signed char var_9 = (signed char)57;
unsigned short var_11 = (unsigned short)59107;
unsigned long long int var_12 = 4683367530787991328ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)3575;
short var_16 = (short)22344;
unsigned long long int var_17 = 6285478532577459700ULL;
unsigned long long int var_18 = 10622769760097953668ULL;
long long int var_19 = -1267953801116161164LL;
unsigned char var_20 = (unsigned char)96;
int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned char arr_7 [21] ;
signed char arr_8 [21] [21] ;
signed char arr_6 [14] ;
unsigned long long int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 488628207;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 9405769280992827755ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 3899911495452234574ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
