#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
short var_2 = (short)17555;
unsigned int var_3 = 3122222167U;
unsigned long long int var_5 = 1255714811353588350ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)251;
short var_11 = (short)24060;
long long int var_12 = -3277703148000739308LL;
int var_13 = 985778893;
signed char var_14 = (signed char)-102;
short var_15 = (short)32569;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)169;
unsigned char var_18 = (unsigned char)168;
unsigned char arr_0 [15] ;
int arr_1 [15] [15] ;
unsigned short arr_2 [15] ;
unsigned short arr_11 [14] [14] [14] ;
unsigned short arr_14 [14] [14] ;
unsigned long long int arr_18 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -1223353960;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)55587;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)31313;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)58040 : (unsigned short)15218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 11605353998717503755ULL : 10702727465609484714ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
