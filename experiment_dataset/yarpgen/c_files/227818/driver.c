#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3638871611U;
unsigned char var_2 = (unsigned char)68;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)50022;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)-91;
int zero = 0;
unsigned char var_15 = (unsigned char)204;
short var_16 = (short)28615;
unsigned char var_17 = (unsigned char)195;
signed char var_18 = (signed char)-55;
unsigned char var_19 = (unsigned char)218;
unsigned short var_20 = (unsigned short)58993;
_Bool var_21 = (_Bool)1;
long long int arr_0 [11] ;
int arr_1 [11] ;
int arr_2 [11] ;
unsigned long long int arr_3 [11] [11] ;
short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -2996652232941722687LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -509600561;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -965962668;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 2413445806436153787ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)14925;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
