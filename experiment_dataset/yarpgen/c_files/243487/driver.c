#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1227272738U;
short var_2 = (short)-1622;
unsigned int var_5 = 1870344845U;
short var_6 = (short)-27823;
int var_7 = 2014811730;
long long int var_9 = 6929147436345487659LL;
int zero = 0;
long long int var_13 = -3522080892947212000LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3966876085201446374LL;
long long int var_16 = -925229241715450949LL;
unsigned char arr_0 [13] ;
int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1307474724;
}

void checksum() {
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
