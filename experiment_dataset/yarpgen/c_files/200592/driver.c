#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1053941868244736605LL;
short var_3 = (short)-24316;
unsigned long long int var_6 = 18218792745314006542ULL;
unsigned long long int var_9 = 3574689605839626285ULL;
long long int var_11 = 3951670765755398514LL;
long long int var_14 = -8584569706955184412LL;
unsigned int var_15 = 158212168U;
unsigned short var_16 = (unsigned short)5220;
signed char var_17 = (signed char)16;
int zero = 0;
int var_18 = -2085988513;
short var_19 = (short)5381;
unsigned char var_20 = (unsigned char)118;
unsigned short var_21 = (unsigned short)2180;
long long int var_22 = 7193045201339371962LL;
unsigned short var_23 = (unsigned short)32618;
long long int var_24 = -6224802790708547369LL;
unsigned short var_25 = (unsigned short)52334;
unsigned long long int arr_0 [12] [12] ;
int arr_1 [12] ;
short arr_2 [12] ;
long long int arr_5 [12] ;
int arr_8 [12] [12] ;
unsigned short arr_10 [16] ;
short arr_3 [12] [12] ;
signed char arr_4 [12] ;
unsigned char arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1603165744696259001ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1758830002;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)29532;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -3758068876144330142LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = -432214263;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)4072;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-4606 : (short)19600;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-108 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned char)208;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
