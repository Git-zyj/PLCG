#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5878574203498328610LL;
long long int var_3 = -645085994945417355LL;
short var_5 = (short)-22134;
int zero = 0;
signed char var_12 = (signed char)-115;
signed char var_13 = (signed char)-108;
unsigned int arr_3 [24] [24] ;
unsigned char arr_6 [24] ;
unsigned long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 1344256752U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 14463494659588446051ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
