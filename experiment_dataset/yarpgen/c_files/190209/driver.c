#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27424;
unsigned short var_1 = (unsigned short)7332;
signed char var_2 = (signed char)15;
short var_4 = (short)13407;
short var_5 = (short)-21529;
long long int var_6 = 8333395237167838560LL;
unsigned int var_7 = 115609135U;
unsigned short var_9 = (unsigned short)45182;
int zero = 0;
unsigned int var_10 = 3711088456U;
unsigned int var_11 = 642200916U;
int var_12 = 910689824;
_Bool var_13 = (_Bool)0;
int arr_0 [17] ;
_Bool arr_2 [17] [17] ;
signed char arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 452181833;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-100;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
