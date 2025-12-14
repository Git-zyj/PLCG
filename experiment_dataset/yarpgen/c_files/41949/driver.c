#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned short var_1 = (unsigned short)55387;
signed char var_3 = (signed char)8;
int var_4 = 998115025;
signed char var_5 = (signed char)-38;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)26927;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)3364;
int zero = 0;
int var_19 = 762288785;
short var_20 = (short)5287;
unsigned long long int var_21 = 1258675138665179566ULL;
unsigned int var_22 = 2310541178U;
unsigned char arr_2 [17] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
