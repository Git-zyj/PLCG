#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13427696727265518047ULL;
signed char var_7 = (signed char)120;
int var_8 = 1945391285;
unsigned char var_11 = (unsigned char)80;
unsigned char var_13 = (unsigned char)201;
int zero = 0;
unsigned short var_19 = (unsigned short)42588;
long long int var_20 = 7081890827676581467LL;
signed char var_21 = (signed char)49;
short var_22 = (short)-24240;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-39;
unsigned long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 14457643178587739254ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 868751697211249808ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 16005173987261880698ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
