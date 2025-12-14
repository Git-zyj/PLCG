#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-13880;
long long int var_9 = 802732186390060286LL;
short var_12 = (short)-18541;
signed char var_18 = (signed char)-74;
int zero = 0;
unsigned short var_19 = (unsigned short)55306;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)13295;
unsigned char var_22 = (unsigned char)16;
unsigned char var_23 = (unsigned char)37;
unsigned short var_24 = (unsigned short)44551;
signed char var_25 = (signed char)-119;
long long int arr_0 [21] ;
short arr_1 [21] ;
_Bool arr_2 [21] ;
signed char arr_3 [21] [21] ;
unsigned char arr_5 [16] ;
_Bool arr_6 [16] ;
unsigned short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5871816709741418411LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)8545;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)38940;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
