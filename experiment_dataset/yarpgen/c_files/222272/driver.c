#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1498468600U;
signed char var_3 = (signed char)-54;
long long int var_4 = 3389282717915645056LL;
long long int var_6 = -7131409336631972322LL;
signed char var_7 = (signed char)-7;
long long int var_8 = -6664050218678023555LL;
unsigned long long int var_9 = 11860085865463439095ULL;
unsigned short var_10 = (unsigned short)38707;
signed char var_11 = (signed char)24;
int zero = 0;
unsigned char var_15 = (unsigned char)171;
short var_16 = (short)14801;
long long int var_17 = 3403305492316050590LL;
unsigned long long int var_18 = 7735748454075478648ULL;
signed char var_19 = (signed char)20;
unsigned char var_20 = (unsigned char)53;
unsigned char var_21 = (unsigned char)120;
long long int var_22 = 909315160964428432LL;
signed char arr_1 [15] [15] ;
int arr_4 [15] [15] [15] ;
signed char arr_11 [23] [23] ;
unsigned short arr_16 [21] ;
short arr_17 [21] ;
unsigned short arr_24 [21] [21] [21] [21] [21] ;
signed char arr_8 [15] [15] ;
long long int arr_13 [23] ;
_Bool arr_26 [21] ;
unsigned int arr_27 [21] ;
unsigned int arr_28 [21] ;
unsigned int arr_31 [23] ;
unsigned char arr_32 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 961810696;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (unsigned short)34416;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (short)-14086;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)548;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 5878163216375640199LL : 6654397380729493527LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 2794917376U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = 4004034060U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = 1111787690U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (unsigned char)105;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
