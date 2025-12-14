#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
int var_2 = 1089443090;
unsigned char var_3 = (unsigned char)179;
unsigned long long int var_4 = 376227410029829245ULL;
int var_6 = 1872397068;
unsigned short var_7 = (unsigned short)39245;
int var_10 = -1837711415;
unsigned long long int var_11 = 4560229873427192211ULL;
int zero = 0;
unsigned long long int var_13 = 11814875060795610557ULL;
_Bool var_14 = (_Bool)0;
unsigned short arr_1 [17] ;
unsigned char arr_4 [17] ;
unsigned char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)51128;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)50;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
