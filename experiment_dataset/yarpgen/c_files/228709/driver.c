#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2780;
int var_1 = -1887808546;
unsigned int var_4 = 608856689U;
signed char var_6 = (signed char)84;
long long int var_9 = -4172743940056539647LL;
short var_10 = (short)-3606;
int zero = 0;
long long int var_12 = 6554375710762642310LL;
unsigned int var_13 = 602525140U;
short var_14 = (short)-27671;
long long int var_15 = -6617188730392111077LL;
long long int var_16 = 1360999859754850553LL;
unsigned long long int arr_0 [15] ;
short arr_1 [15] ;
short arr_3 [15] ;
unsigned long long int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 16317815187674607351ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)1563;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-28959;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 18263690859357693272ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
