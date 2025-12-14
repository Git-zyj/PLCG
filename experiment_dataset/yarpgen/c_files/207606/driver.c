#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3656;
unsigned long long int var_3 = 11866037810665874989ULL;
signed char var_4 = (signed char)3;
signed char var_7 = (signed char)26;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)59;
unsigned char var_10 = (unsigned char)65;
short var_12 = (short)16948;
short var_14 = (short)-1685;
unsigned long long int var_17 = 11990082285255243304ULL;
int zero = 0;
signed char var_20 = (signed char)16;
unsigned char var_21 = (unsigned char)251;
unsigned char var_22 = (unsigned char)66;
unsigned short var_23 = (unsigned short)48530;
unsigned char var_24 = (unsigned char)43;
long long int var_25 = 3183371492359947709LL;
long long int var_26 = 7735267819393446388LL;
unsigned char var_27 = (unsigned char)76;
long long int arr_0 [25] [25] ;
_Bool arr_1 [25] ;
unsigned short arr_2 [25] ;
signed char arr_4 [25] ;
unsigned char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -5347961811401037264LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)48087;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)25;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
