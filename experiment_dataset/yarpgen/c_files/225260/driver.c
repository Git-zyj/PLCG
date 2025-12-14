#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)217;
unsigned int var_2 = 3042952592U;
unsigned short var_6 = (unsigned short)14253;
unsigned short var_8 = (unsigned short)60472;
signed char var_9 = (signed char)-70;
unsigned char var_11 = (unsigned char)53;
short var_13 = (short)9505;
unsigned short var_14 = (unsigned short)57478;
unsigned long long int var_16 = 10540869255230164658ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 6528464906245976204LL;
int zero = 0;
unsigned long long int var_19 = 12489248196622253662ULL;
unsigned char var_20 = (unsigned char)33;
unsigned int var_21 = 3753711093U;
unsigned short var_22 = (unsigned short)37521;
unsigned long long int var_23 = 7844591061401121664ULL;
_Bool var_24 = (_Bool)1;
long long int var_25 = -1142119921495244560LL;
short var_26 = (short)1967;
long long int arr_0 [10] ;
int arr_1 [10] ;
unsigned int arr_2 [10] ;
short arr_4 [17] ;
unsigned int arr_5 [17] ;
_Bool arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -8671318650864254075LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1054972557;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1056160636U : 2271654333U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-32333;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1137694142U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
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
