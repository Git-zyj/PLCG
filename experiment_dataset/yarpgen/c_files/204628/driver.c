#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
signed char var_2 = (signed char)-7;
unsigned char var_5 = (unsigned char)177;
unsigned int var_6 = 1328580795U;
signed char var_10 = (signed char)-21;
signed char var_13 = (signed char)68;
short var_14 = (short)-32584;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)-102;
signed char var_18 = (signed char)30;
int zero = 0;
signed char var_19 = (signed char)-65;
unsigned int var_20 = 998935063U;
unsigned long long int var_21 = 13674799790526244429ULL;
signed char var_22 = (signed char)-57;
signed char var_23 = (signed char)82;
signed char arr_0 [12] ;
unsigned char arr_1 [12] ;
signed char arr_3 [12] ;
_Bool arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
