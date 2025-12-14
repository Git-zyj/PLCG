#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned long long int var_1 = 10673179387759799489ULL;
unsigned short var_5 = (unsigned short)63102;
signed char var_7 = (signed char)57;
short var_12 = (short)16890;
short var_15 = (short)-10125;
unsigned long long int var_16 = 5556093015454151926ULL;
unsigned short var_17 = (unsigned short)6358;
int zero = 0;
unsigned long long int var_20 = 4341738311294503512ULL;
unsigned short var_21 = (unsigned short)38488;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)31764;
unsigned char var_24 = (unsigned char)70;
unsigned int var_25 = 2937864923U;
unsigned int arr_0 [14] [14] ;
_Bool arr_6 [14] ;
unsigned char arr_2 [14] ;
long long int arr_3 [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 3514156093U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -4577657209594356582LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-120;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
