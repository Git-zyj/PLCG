#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11508;
long long int var_4 = -6666889607517480156LL;
short var_5 = (short)-21718;
long long int var_7 = 8129104099493607241LL;
unsigned short var_8 = (unsigned short)58999;
unsigned int var_10 = 3138718325U;
int zero = 0;
long long int var_11 = 7920257939996382928LL;
unsigned long long int var_12 = 2537219968017015076ULL;
_Bool var_13 = (_Bool)0;
int var_14 = 1428990076;
unsigned char var_15 = (unsigned char)57;
unsigned char arr_0 [24] ;
long long int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 7350482308544154189LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
