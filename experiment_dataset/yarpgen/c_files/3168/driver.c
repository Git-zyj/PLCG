#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12971;
short var_3 = (short)9487;
unsigned char var_4 = (unsigned char)232;
short var_10 = (short)25785;
unsigned char var_11 = (unsigned char)204;
unsigned char var_14 = (unsigned char)171;
int zero = 0;
short var_19 = (short)27132;
unsigned char var_20 = (unsigned char)104;
unsigned char var_21 = (unsigned char)183;
unsigned char var_22 = (unsigned char)196;
short var_23 = (short)-3667;
short var_24 = (short)-17914;
unsigned char arr_1 [24] ;
unsigned char arr_2 [24] ;
unsigned char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)121;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
