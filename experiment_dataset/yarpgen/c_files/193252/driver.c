#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4711749145568405014LL;
unsigned long long int var_3 = 17890003681218460811ULL;
unsigned char var_4 = (unsigned char)75;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)15674;
unsigned char var_7 = (unsigned char)112;
unsigned short var_8 = (unsigned short)28143;
int var_9 = -1710761061;
int zero = 0;
unsigned short var_10 = (unsigned short)6502;
short var_11 = (short)-1581;
unsigned char var_12 = (unsigned char)135;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)82;
unsigned char arr_0 [13] ;
unsigned char arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 4086655159U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
