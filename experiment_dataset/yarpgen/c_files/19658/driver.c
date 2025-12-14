#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24447;
long long int var_4 = -5085923621104698247LL;
signed char var_6 = (signed char)84;
long long int var_8 = 2128937400312777457LL;
int var_9 = 836110990;
int zero = 0;
signed char var_12 = (signed char)90;
unsigned int var_13 = 3201853229U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-89;
short var_16 = (short)-5511;
unsigned int var_17 = 2014793120U;
short var_18 = (short)-7312;
long long int arr_0 [11] [11] ;
signed char arr_2 [11] ;
unsigned long long int arr_3 [14] ;
short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1999655829389930843LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 9926629593623173788ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-20770;
}

void checksum() {
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
