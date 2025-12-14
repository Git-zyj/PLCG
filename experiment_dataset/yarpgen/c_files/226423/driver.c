#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)35;
unsigned short var_3 = (unsigned short)54463;
unsigned short var_4 = (unsigned short)6976;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)100;
signed char var_9 = (signed char)101;
int var_10 = 59832419;
int zero = 0;
signed char var_11 = (signed char)-67;
unsigned short var_12 = (unsigned short)11068;
unsigned short var_13 = (unsigned short)3482;
short var_14 = (short)21980;
signed char var_15 = (signed char)68;
signed char arr_2 [13] [13] [13] ;
signed char arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)90 : (signed char)-107;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
