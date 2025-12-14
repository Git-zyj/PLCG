#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-610;
unsigned short var_4 = (unsigned short)45;
signed char var_5 = (signed char)115;
unsigned char var_8 = (unsigned char)206;
int var_9 = -567012560;
short var_10 = (short)3301;
short var_11 = (short)-3293;
long long int var_12 = -7486858040493514806LL;
long long int var_14 = -722656316081921701LL;
int zero = 0;
unsigned int var_17 = 3623242919U;
unsigned short var_18 = (unsigned short)38544;
unsigned long long int var_19 = 2773142123121620990ULL;
unsigned long long int var_20 = 4650377551510206967ULL;
signed char arr_14 [14] ;
signed char arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)-28;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)109 : (signed char)110;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
