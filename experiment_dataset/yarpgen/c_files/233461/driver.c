#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3095092680771205812LL;
unsigned char var_1 = (unsigned char)56;
unsigned char var_2 = (unsigned char)140;
int var_3 = 487313697;
long long int var_4 = -2942518551315640199LL;
short var_5 = (short)17734;
int var_6 = 917672748;
unsigned long long int var_7 = 4005585319011541455ULL;
long long int var_9 = -1674101525306051135LL;
_Bool var_10 = (_Bool)0;
int var_11 = -2052150814;
int zero = 0;
int var_12 = -1141196074;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)31;
int arr_0 [22] [22] ;
_Bool arr_2 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 1384057948;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)52;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
