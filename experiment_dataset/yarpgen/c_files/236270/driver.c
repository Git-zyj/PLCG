#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7259996424694419191LL;
long long int var_7 = 5106795176986903268LL;
unsigned short var_9 = (unsigned short)55934;
unsigned char var_10 = (unsigned char)245;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 8565700262262450785ULL;
unsigned short var_17 = (unsigned short)24195;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 9978430604798413414ULL;
int var_20 = -969550130;
unsigned short var_21 = (unsigned short)25493;
unsigned long long int var_22 = 13919405692525598181ULL;
unsigned long long int arr_3 [16] ;
signed char arr_4 [16] [16] [16] ;
short arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 13454927415404201809ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)67 : (signed char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-21946 : (short)-12397;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
