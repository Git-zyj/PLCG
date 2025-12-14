#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60409;
long long int var_2 = -3651312852621637642LL;
long long int var_3 = 6523422123990627406LL;
short var_4 = (short)-32340;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)5;
signed char var_7 = (signed char)78;
unsigned char var_8 = (unsigned char)15;
int var_9 = -1777798074;
signed char var_10 = (signed char)-15;
int zero = 0;
unsigned char var_11 = (unsigned char)104;
unsigned char var_12 = (unsigned char)97;
signed char var_13 = (signed char)-88;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
signed char arr_3 [21] ;
long long int arr_6 [21] ;
unsigned short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)32 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -975624718669386416LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5329 : (unsigned short)46641;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
