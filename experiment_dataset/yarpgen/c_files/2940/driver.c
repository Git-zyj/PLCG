#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2528;
unsigned char var_7 = (unsigned char)79;
unsigned int var_9 = 646665959U;
unsigned long long int var_11 = 11725614342036683359ULL;
long long int var_12 = 7429996664623909894LL;
int zero = 0;
unsigned int var_20 = 2917031971U;
_Bool var_21 = (_Bool)1;
int var_22 = 2120569871;
unsigned long long int var_23 = 14751905674236968552ULL;
int arr_1 [11] [11] ;
unsigned char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 2062124213;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)229;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
