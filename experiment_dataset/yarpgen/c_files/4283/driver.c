#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2206144282U;
unsigned short var_4 = (unsigned short)40990;
unsigned char var_5 = (unsigned char)223;
int var_6 = 790390923;
unsigned short var_7 = (unsigned short)13228;
long long int var_8 = 8793396943605410035LL;
short var_9 = (short)-20495;
int zero = 0;
unsigned char var_10 = (unsigned char)194;
unsigned char var_11 = (unsigned char)17;
int var_12 = -1201597553;
unsigned short var_13 = (unsigned short)51574;
signed char var_14 = (signed char)-81;
long long int var_15 = 265534664315420588LL;
long long int var_16 = -5920926060079499086LL;
long long int arr_0 [15] ;
unsigned short arr_2 [15] ;
unsigned char arr_3 [15] ;
short arr_5 [15] [15] ;
short arr_6 [15] [15] [15] [15] ;
signed char arr_7 [15] ;
unsigned char arr_11 [14] ;
unsigned short arr_14 [14] ;
unsigned long long int arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -8104875488959007727LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31302 : (unsigned short)38135;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)25643 : (short)29307;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)10567;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned short)52011;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 7323068213787690732ULL : 3007908588611683368ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
