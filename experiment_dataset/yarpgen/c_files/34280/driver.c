#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
unsigned char var_3 = (unsigned char)170;
signed char var_7 = (signed char)-101;
unsigned char var_8 = (unsigned char)179;
unsigned short var_11 = (unsigned short)62877;
int zero = 0;
signed char var_12 = (signed char)122;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-19122;
_Bool var_15 = (_Bool)1;
int var_16 = 1539407727;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)51963;
unsigned char arr_1 [13] ;
unsigned long long int arr_2 [13] ;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 6565246038418094240ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)107;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
