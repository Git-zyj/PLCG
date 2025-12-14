#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-107;
signed char var_3 = (signed char)122;
unsigned char var_5 = (unsigned char)94;
unsigned short var_11 = (unsigned short)29743;
unsigned short var_12 = (unsigned short)30496;
unsigned long long int var_14 = 17386734603696174668ULL;
short var_16 = (short)-14174;
int zero = 0;
unsigned short var_18 = (unsigned short)62200;
signed char var_19 = (signed char)-76;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned char arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)223;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
