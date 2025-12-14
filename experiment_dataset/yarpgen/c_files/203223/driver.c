#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37286;
int var_1 = 268960004;
unsigned short var_5 = (unsigned short)4133;
signed char var_7 = (signed char)121;
unsigned short var_12 = (unsigned short)1124;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
int var_16 = 946989945;
unsigned int var_17 = 3875168719U;
long long int var_18 = 8219812508698385271LL;
unsigned int arr_2 [14] ;
unsigned int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4124783273U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3979095995U : 1132640916U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
