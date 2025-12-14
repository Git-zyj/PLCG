#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
unsigned char var_4 = (unsigned char)128;
unsigned char var_5 = (unsigned char)145;
unsigned char var_7 = (unsigned char)209;
unsigned char var_8 = (unsigned char)211;
unsigned char var_9 = (unsigned char)217;
unsigned short var_11 = (unsigned short)21288;
unsigned char var_13 = (unsigned char)67;
int zero = 0;
unsigned char var_14 = (unsigned char)198;
unsigned char var_15 = (unsigned char)206;
short var_16 = (short)23666;
long long int var_17 = 5005223186704549616LL;
unsigned char var_18 = (unsigned char)72;
long long int var_19 = -2436340711820039124LL;
unsigned char var_20 = (unsigned char)77;
short var_21 = (short)-16805;
unsigned char var_22 = (unsigned char)208;
short var_23 = (short)-30893;
short var_24 = (short)6374;
short var_25 = (short)-12884;
long long int arr_0 [20] [20] ;
_Bool arr_1 [20] ;
unsigned char arr_4 [20] ;
unsigned int arr_5 [20] [20] ;
long long int arr_6 [20] [20] ;
long long int arr_7 [20] ;
short arr_8 [20] [20] ;
short arr_11 [21] ;
unsigned char arr_13 [21] [21] ;
unsigned int arr_9 [20] [20] ;
unsigned char arr_10 [20] ;
unsigned int arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -1279084659460059730LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 3839870183U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 561445077191975460LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 7932746734970585441LL : -1031701350607637265LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-22000 : (short)4371;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)-23389;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 3641563845U : 3947447132U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 603815588U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
