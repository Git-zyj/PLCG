#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 559893486;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)86;
unsigned int var_9 = 3138809433U;
unsigned short var_10 = (unsigned short)25295;
int zero = 0;
signed char var_17 = (signed char)-84;
unsigned int var_18 = 224014669U;
unsigned char var_19 = (unsigned char)49;
signed char var_20 = (signed char)-126;
unsigned int arr_1 [21] [21] ;
int arr_2 [21] ;
int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 3609019760U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -285072431;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 10164187;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
