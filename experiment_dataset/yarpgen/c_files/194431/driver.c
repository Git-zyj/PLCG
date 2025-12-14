#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = -1345187545;
long long int var_6 = 6004636393856226711LL;
int var_7 = -1287661681;
unsigned int var_9 = 1346030270U;
unsigned long long int var_11 = 16242449279441278968ULL;
long long int var_15 = -1316191264903877619LL;
signed char var_17 = (signed char)-83;
int zero = 0;
int var_18 = -737895224;
unsigned char var_19 = (unsigned char)180;
unsigned char var_20 = (unsigned char)59;
unsigned long long int var_21 = 3332553691534741134ULL;
unsigned char var_22 = (unsigned char)6;
unsigned int var_23 = 1841240210U;
int var_24 = 1210153851;
unsigned short var_25 = (unsigned short)60737;
long long int arr_0 [25] ;
short arr_1 [25] ;
_Bool arr_2 [25] ;
long long int arr_3 [25] ;
unsigned char arr_5 [14] ;
_Bool arr_6 [14] ;
unsigned short arr_4 [25] [25] ;
short arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8698519752678090162LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)29318;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -174735616953559325LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)48762;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)-20664;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
