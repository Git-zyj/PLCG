#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-99;
long long int var_4 = -6897044985264930810LL;
long long int var_6 = -7370628498560063435LL;
int zero = 0;
short var_10 = (short)20651;
short var_11 = (short)-32050;
int var_12 = 1542073799;
int var_13 = -1266661357;
int var_14 = -373463814;
_Bool arr_0 [17] ;
signed char arr_1 [17] ;
unsigned short arr_3 [13] [13] ;
unsigned char arr_2 [17] ;
unsigned int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)53663;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 23313984U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
