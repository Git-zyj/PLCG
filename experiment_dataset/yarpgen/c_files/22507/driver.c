#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52213;
signed char var_1 = (signed char)-77;
short var_2 = (short)22729;
long long int var_3 = -4328920746016119609LL;
long long int var_5 = 5511614801186742718LL;
short var_6 = (short)-12591;
short var_8 = (short)7389;
long long int var_9 = -2759143350985560007LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-80;
unsigned short var_12 = (unsigned short)8626;
signed char var_13 = (signed char)-106;
unsigned long long int var_14 = 2484935263282791794ULL;
unsigned long long int var_15 = 10647832376686272757ULL;
_Bool var_16 = (_Bool)0;
short arr_0 [20] [20] ;
short arr_4 [25] ;
unsigned short arr_5 [25] ;
short arr_7 [25] ;
_Bool arr_2 [20] ;
unsigned char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)21961;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-24983;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)50265;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)12357;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned char)35;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
