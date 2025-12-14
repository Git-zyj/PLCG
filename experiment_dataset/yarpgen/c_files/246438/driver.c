#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
unsigned long long int var_3 = 15210492334496921390ULL;
signed char var_4 = (signed char)-85;
unsigned char var_5 = (unsigned char)213;
int var_6 = 289705955;
unsigned long long int var_7 = 7029393185881770866ULL;
short var_8 = (short)32711;
unsigned short var_9 = (unsigned short)19993;
unsigned short var_10 = (unsigned short)44592;
long long int var_11 = 8383063046753096250LL;
long long int var_12 = 1249084434121826590LL;
unsigned short var_13 = (unsigned short)7771;
signed char var_14 = (signed char)38;
unsigned char var_16 = (unsigned char)15;
int zero = 0;
signed char var_17 = (signed char)-6;
unsigned long long int var_18 = 3463975763450097100ULL;
unsigned long long int var_19 = 5390007519172048562ULL;
short var_20 = (short)-22592;
int arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
unsigned char arr_3 [13] [13] ;
unsigned short arr_4 [13] ;
long long int arr_5 [13] [13] ;
int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -2066532947;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 223412204788902899ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)49 : (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)37718;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -4641913537452196776LL : 2757644377590935748LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -1214579378 : 2009980968;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
