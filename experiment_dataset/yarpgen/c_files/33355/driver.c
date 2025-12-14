#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 357408806U;
unsigned long long int var_3 = 10964065496019204938ULL;
unsigned short var_5 = (unsigned short)26389;
long long int var_7 = -886746137905054799LL;
unsigned short var_9 = (unsigned short)22214;
int zero = 0;
unsigned int var_10 = 3328617126U;
unsigned short var_11 = (unsigned short)33789;
short var_12 = (short)-6466;
_Bool arr_1 [22] ;
unsigned short arr_3 [22] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)6024;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-30654;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
