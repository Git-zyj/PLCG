#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13091;
signed char var_1 = (signed char)-20;
long long int var_2 = -3815661887341922817LL;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 2839491991U;
long long int var_13 = 106433914050874637LL;
unsigned char var_15 = (unsigned char)119;
int zero = 0;
signed char var_17 = (signed char)-34;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1034702889817000557ULL;
unsigned char var_20 = (unsigned char)39;
_Bool var_21 = (_Bool)1;
short var_22 = (short)23494;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 5779140986201552250ULL;
unsigned char arr_2 [11] ;
signed char arr_3 [11] [11] ;
int arr_4 [11] [11] [11] ;
short arr_7 [11] ;
unsigned short arr_9 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1421851298;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)21419;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)11836 : (unsigned short)40326;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
