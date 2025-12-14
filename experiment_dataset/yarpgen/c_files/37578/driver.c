#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53070;
unsigned short var_1 = (unsigned short)12871;
short var_4 = (short)-19844;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)27850;
long long int var_9 = 3302012952935466315LL;
long long int var_11 = -255759550727860788LL;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned short var_17 = (unsigned short)47160;
long long int var_18 = -4949087423702182084LL;
long long int var_19 = -13664455641341783LL;
unsigned short arr_0 [25] [25] ;
unsigned int arr_2 [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)61833;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 46590215U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)214;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
