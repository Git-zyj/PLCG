#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1258269793U;
unsigned int var_2 = 2788064889U;
unsigned char var_4 = (unsigned char)87;
signed char var_5 = (signed char)-91;
short var_6 = (short)-27048;
unsigned char var_7 = (unsigned char)212;
int zero = 0;
int var_12 = 1480397801;
unsigned char var_13 = (unsigned char)116;
unsigned char var_14 = (unsigned char)72;
signed char var_15 = (signed char)-78;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)5575;
unsigned int arr_0 [25] ;
long long int arr_1 [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16969832U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4620713852361692081LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2499966658U : 2300283795U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
