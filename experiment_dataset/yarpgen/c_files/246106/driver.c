#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15790;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)196;
long long int var_5 = 7301163520533249040LL;
unsigned char var_8 = (unsigned char)0;
unsigned int var_9 = 809561862U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = -1280954785;
unsigned char var_12 = (unsigned char)217;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7705439122378989698LL;
signed char arr_2 [25] ;
unsigned int arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1630741348U : 2786467376U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
