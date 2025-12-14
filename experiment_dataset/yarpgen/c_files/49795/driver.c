#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52255;
unsigned char var_5 = (unsigned char)18;
short var_6 = (short)26836;
short var_7 = (short)-25715;
short var_13 = (short)-13843;
short var_14 = (short)-11499;
unsigned char var_15 = (unsigned char)115;
long long int var_19 = 6210361893987007776LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)147;
unsigned char var_22 = (unsigned char)92;
unsigned char var_23 = (unsigned char)132;
short var_24 = (short)-27259;
short var_25 = (short)-18501;
short arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)32154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)1055;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-32;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
