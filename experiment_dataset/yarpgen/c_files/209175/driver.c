#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4282;
signed char var_2 = (signed char)115;
long long int var_3 = 2422436865278261308LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_8 = -3168941717033463670LL;
short var_9 = (short)-1822;
signed char var_10 = (signed char)63;
signed char var_11 = (signed char)-71;
unsigned long long int var_12 = 2703435771513804184ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 9708877953583873113ULL;
unsigned int var_15 = 1092288372U;
long long int var_16 = 1746163713368854952LL;
unsigned int var_17 = 3881088435U;
unsigned char var_18 = (unsigned char)88;
int arr_0 [18] ;
unsigned char arr_1 [18] ;
_Bool arr_3 [18] ;
int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1844817321;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 890967664;
}

void checksum() {
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
