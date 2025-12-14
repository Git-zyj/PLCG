#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17276;
signed char var_6 = (signed char)6;
unsigned char var_8 = (unsigned char)136;
long long int var_13 = 2776255505819557235LL;
int zero = 0;
signed char var_14 = (signed char)78;
short var_15 = (short)10901;
unsigned long long int var_16 = 1070266517297501437ULL;
signed char var_17 = (signed char)-51;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 421037668U;
unsigned int var_20 = 2477127502U;
signed char var_21 = (signed char)122;
unsigned char arr_0 [24] ;
long long int arr_1 [24] ;
unsigned short arr_7 [24] ;
signed char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -2896814382076081325LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)38391;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-126 : (signed char)108;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
