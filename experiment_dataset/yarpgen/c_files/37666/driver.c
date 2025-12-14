#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-46;
signed char var_4 = (signed char)-97;
unsigned int var_5 = 3468239342U;
short var_6 = (short)20371;
unsigned int var_7 = 1434795455U;
long long int var_9 = 4009582230263712961LL;
int zero = 0;
int var_10 = 716788627;
unsigned long long int var_11 = 7576301715606245215ULL;
unsigned int var_12 = 1130788977U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2939292233U;
_Bool var_15 = (_Bool)1;
int arr_4 [19] ;
unsigned char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1692700759;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)218 : (unsigned char)200;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
