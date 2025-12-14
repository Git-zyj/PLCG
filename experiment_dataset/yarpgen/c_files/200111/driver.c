#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1176475830U;
short var_1 = (short)31956;
unsigned short var_3 = (unsigned short)31439;
unsigned short var_9 = (unsigned short)60080;
short var_11 = (short)6848;
unsigned long long int var_13 = 7506666428112255110ULL;
long long int var_14 = 4837029546742070875LL;
unsigned long long int var_15 = 9021069902703403396ULL;
int var_16 = 1123780103;
int zero = 0;
unsigned short var_17 = (unsigned short)27901;
long long int var_18 = 8348257804925995902LL;
signed char var_19 = (signed char)-113;
unsigned long long int var_20 = 509552442143188626ULL;
short arr_0 [15] [15] ;
_Bool arr_2 [15] [15] ;
signed char arr_3 [15] [15] ;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)2448;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)18;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
