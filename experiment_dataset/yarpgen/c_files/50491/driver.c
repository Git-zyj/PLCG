#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59299;
_Bool var_1 = (_Bool)1;
short var_4 = (short)-17951;
unsigned long long int var_5 = 1391328713371101737ULL;
signed char var_7 = (signed char)-43;
int var_9 = 405462915;
int zero = 0;
unsigned long long int var_10 = 4337952139243542020ULL;
long long int var_11 = 7127448985512599462LL;
unsigned int var_12 = 2498231738U;
unsigned char arr_1 [25] ;
long long int arr_4 [25] ;
_Bool arr_6 [25] ;
unsigned char arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1392057878413175804LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)116;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
