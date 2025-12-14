#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)11995;
long long int var_2 = -7079139870183821220LL;
unsigned short var_3 = (unsigned short)14510;
signed char var_4 = (signed char)54;
signed char var_5 = (signed char)124;
unsigned char var_6 = (unsigned char)248;
unsigned long long int var_9 = 809749618952563094ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_13 = 1123112587786361318LL;
int zero = 0;
long long int var_14 = 3333927076785718653LL;
long long int var_15 = 691453895870954123LL;
unsigned char var_16 = (unsigned char)155;
signed char arr_6 [22] [22] ;
signed char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (signed char)-75;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
