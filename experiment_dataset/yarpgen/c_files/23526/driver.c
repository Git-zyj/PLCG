#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)220;
short var_2 = (short)18616;
long long int var_4 = -3215447737095572493LL;
long long int var_6 = 1539978014014877380LL;
long long int var_7 = 7867228350550471929LL;
unsigned char var_8 = (unsigned char)182;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 687347838499284798LL;
signed char var_12 = (signed char)21;
long long int var_13 = -6671047189574064995LL;
signed char var_14 = (signed char)6;
unsigned long long int arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 13546868129146079238ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2338515802208559964LL;
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
