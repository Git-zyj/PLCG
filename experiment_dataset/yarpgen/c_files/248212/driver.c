#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49999;
unsigned char var_3 = (unsigned char)139;
unsigned char var_5 = (unsigned char)227;
long long int var_8 = 4702191183608288LL;
int var_12 = -1699577675;
int zero = 0;
unsigned short var_14 = (unsigned short)58780;
long long int var_15 = -9119373606824700686LL;
int var_16 = -1606721934;
unsigned char var_17 = (unsigned char)131;
long long int arr_0 [25] ;
long long int arr_1 [25] [25] ;
_Bool arr_3 [25] ;
int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 976635995691902172LL : 6034713911887266359LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -8399679633031356151LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -1113153859;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
