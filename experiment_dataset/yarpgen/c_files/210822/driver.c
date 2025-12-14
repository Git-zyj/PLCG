#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15684007717657639009ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 1991202025;
signed char var_5 = (signed char)(-127 - 1);
int var_6 = -780675294;
short var_7 = (short)-15382;
long long int var_10 = 5767296402997637299LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)95;
int zero = 0;
short var_16 = (short)-12309;
short var_17 = (short)15642;
_Bool var_18 = (_Bool)1;
int var_19 = 543401455;
short arr_0 [25] ;
short arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-30648;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-32503 : (short)19422;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 7457197356611898146ULL : 1146913205635475082ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)63 : (signed char)-40;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
