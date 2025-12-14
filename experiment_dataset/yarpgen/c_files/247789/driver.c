#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)51;
unsigned long long int var_2 = 14247427054177213306ULL;
long long int var_3 = -8412150304528318842LL;
int var_4 = -491350245;
unsigned short var_5 = (unsigned short)17786;
short var_8 = (short)-22325;
int var_9 = -1826255681;
int zero = 0;
long long int var_13 = 8499801419368714084LL;
signed char var_14 = (signed char)10;
int var_15 = -155229604;
short arr_0 [14] [14] ;
long long int arr_1 [14] ;
long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-29579;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8923710868652699815LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4110919086596594033LL : -7135733442094665034LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
