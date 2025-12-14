#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30179;
int var_1 = 539993307;
unsigned long long int var_2 = 12883414775255754601ULL;
int var_3 = -406457980;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_7 = 863694666;
int var_9 = 1756390635;
int var_10 = -1014236563;
int var_11 = -1822544581;
short var_12 = (short)9843;
int var_13 = -1299278620;
unsigned char var_14 = (unsigned char)215;
int zero = 0;
unsigned long long int var_15 = 3303312379316217524ULL;
int var_16 = -193524141;
int var_17 = 65189784;
unsigned long long int var_18 = 14122970023506128771ULL;
unsigned char arr_0 [25] [25] ;
int arr_1 [25] ;
unsigned int arr_2 [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)100 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1709170077 : 1911284696;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 733189678U : 4033309719U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)9;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
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
