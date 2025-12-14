#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10513930139796904143ULL;
unsigned int var_6 = 1957006050U;
long long int var_8 = -6657956787939682671LL;
unsigned long long int var_11 = 11456014857071965708ULL;
unsigned long long int var_17 = 3698898223076245043ULL;
unsigned short var_19 = (unsigned short)14690;
int zero = 0;
unsigned short var_20 = (unsigned short)41876;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4073512433U;
unsigned char arr_0 [22] ;
long long int arr_4 [22] [22] ;
short arr_6 [22] [22] ;
unsigned long long int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 2697195341090412235LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)24065;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2354212179856877137ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
