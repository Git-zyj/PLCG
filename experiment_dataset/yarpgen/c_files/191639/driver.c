#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30806;
int var_1 = 2032794249;
unsigned char var_2 = (unsigned char)238;
long long int var_3 = 6959663227687266844LL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-89;
unsigned long long int var_7 = 14323845221546756719ULL;
unsigned short var_8 = (unsigned short)49751;
short var_9 = (short)18407;
unsigned short var_10 = (unsigned short)11868;
short var_11 = (short)-9627;
int zero = 0;
signed char var_16 = (signed char)-41;
unsigned int var_17 = 313906230U;
int var_18 = 307810802;
unsigned char var_19 = (unsigned char)63;
_Bool arr_0 [22] [22] ;
long long int arr_3 [22] [22] ;
short arr_4 [22] ;
short arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -7203888753758750404LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-32213;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-23638;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
