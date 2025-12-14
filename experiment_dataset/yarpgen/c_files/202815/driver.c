#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
short var_1 = (short)-3012;
short var_2 = (short)-21678;
signed char var_4 = (signed char)27;
short var_5 = (short)4749;
signed char var_6 = (signed char)41;
unsigned char var_7 = (unsigned char)15;
signed char var_8 = (signed char)104;
int zero = 0;
unsigned char var_11 = (unsigned char)93;
long long int var_12 = -5903248826172780068LL;
signed char var_13 = (signed char)38;
_Bool arr_2 [23] [23] ;
long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 6949072274077497097LL : -5464873131597571602LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
