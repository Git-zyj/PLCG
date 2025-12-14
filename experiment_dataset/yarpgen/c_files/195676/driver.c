#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3712089330U;
unsigned char var_2 = (unsigned char)117;
short var_4 = (short)16203;
long long int var_6 = 5651719035137395934LL;
unsigned char var_8 = (unsigned char)152;
signed char var_9 = (signed char)-87;
unsigned int var_10 = 1860823269U;
int zero = 0;
unsigned short var_12 = (unsigned short)38011;
unsigned char var_13 = (unsigned char)14;
int var_14 = 1516687460;
unsigned int var_15 = 490944743U;
short var_16 = (short)17566;
unsigned short arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_2 [24] ;
unsigned short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)5230;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)154 : (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39705 : (unsigned short)15946;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
