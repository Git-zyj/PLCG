#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
signed char var_3 = (signed char)33;
unsigned char var_4 = (unsigned char)161;
short var_5 = (short)1681;
unsigned int var_6 = 42021886U;
unsigned long long int var_7 = 7019653523901680245ULL;
unsigned int var_8 = 3661467150U;
short var_9 = (short)-13813;
unsigned long long int var_10 = 11999567979247632039ULL;
unsigned long long int var_11 = 13056450976558777147ULL;
unsigned char var_12 = (unsigned char)170;
int zero = 0;
unsigned short var_14 = (unsigned short)49837;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14395548734603489071ULL;
short var_17 = (short)18383;
short var_18 = (short)31025;
unsigned short arr_0 [10] ;
unsigned short arr_3 [10] ;
short arr_4 [10] ;
unsigned char arr_9 [15] ;
short arr_10 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12428 : (unsigned short)39974;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24486 : (unsigned short)57264;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-2206 : (short)-12223;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-9123;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
