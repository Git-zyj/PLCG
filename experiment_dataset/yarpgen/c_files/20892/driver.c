#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34426;
int var_1 = 1387427054;
unsigned char var_2 = (unsigned char)174;
unsigned int var_3 = 1040454976U;
unsigned char var_4 = (unsigned char)72;
unsigned long long int var_5 = 6029365846407028684ULL;
signed char var_6 = (signed char)-54;
int var_7 = 1048041107;
unsigned short var_8 = (unsigned short)9759;
long long int var_10 = -3481984057215410820LL;
unsigned int var_11 = 1896594823U;
signed char var_13 = (signed char)-126;
int var_14 = -61285466;
int zero = 0;
unsigned int var_15 = 1763086317U;
int var_16 = -883093145;
long long int var_17 = 470565920379952523LL;
short var_18 = (short)-2280;
int arr_1 [17] ;
_Bool arr_3 [17] [17] [17] ;
unsigned short arr_4 [17] [17] [17] ;
long long int arr_5 [17] [17] ;
signed char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1990593417;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)37970;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 1154692162293845672LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)-88;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
