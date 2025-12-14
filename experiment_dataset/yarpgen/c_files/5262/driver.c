#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2345371005U;
unsigned int var_3 = 2384030222U;
unsigned long long int var_4 = 10809379583193706790ULL;
signed char var_9 = (signed char)69;
unsigned short var_10 = (unsigned short)23500;
int zero = 0;
short var_12 = (short)8201;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4073402173U;
signed char arr_3 [25] ;
unsigned int arr_4 [25] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1837981099U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 15319155419130809423ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
