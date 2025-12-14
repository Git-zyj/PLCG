#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13520;
signed char var_2 = (signed char)11;
unsigned long long int var_3 = 1235987680483760487ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 2525381212487375926LL;
int zero = 0;
unsigned short var_10 = (unsigned short)17694;
int var_11 = 348885889;
unsigned short var_12 = (unsigned short)6098;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)89;
unsigned char arr_0 [13] ;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)81;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
