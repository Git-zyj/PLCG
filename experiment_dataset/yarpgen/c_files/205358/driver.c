#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2341874377U;
unsigned char var_3 = (unsigned char)237;
unsigned long long int var_4 = 4043610181474232890ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-117;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 5887329138975707871ULL;
unsigned int var_9 = 2672633057U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)91;
unsigned long long int var_15 = 15927773167073703347ULL;
int var_17 = -917225048;
int zero = 0;
unsigned int var_18 = 2633661522U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)14;
unsigned int var_21 = 990549374U;
unsigned char var_22 = (unsigned char)75;
unsigned int arr_0 [21] ;
unsigned char arr_2 [21] ;
long long int arr_3 [21] ;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1723173683U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 6725180938296764378LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
