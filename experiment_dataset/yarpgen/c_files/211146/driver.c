#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23703;
_Bool var_1 = (_Bool)0;
unsigned int var_7 = 4146692955U;
short var_11 = (short)-25918;
long long int var_12 = 6547140322415971127LL;
int zero = 0;
unsigned char var_14 = (unsigned char)194;
unsigned long long int var_15 = 13443225689547909845ULL;
unsigned short var_16 = (unsigned short)24848;
short var_17 = (short)-30208;
long long int var_18 = -623366718500111043LL;
unsigned int arr_0 [24] ;
unsigned char arr_2 [24] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3880424533U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 4233176607U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
