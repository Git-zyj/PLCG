#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18073454638774225497ULL;
long long int var_4 = 4688194620942836696LL;
unsigned short var_5 = (unsigned short)49757;
unsigned long long int var_6 = 13210913619779951325ULL;
unsigned short var_7 = (unsigned short)63174;
_Bool var_8 = (_Bool)1;
int var_9 = 1137872658;
int zero = 0;
unsigned long long int var_10 = 2199717911578459407ULL;
unsigned char var_11 = (unsigned char)64;
signed char var_12 = (signed char)-91;
signed char arr_1 [22] [22] ;
signed char arr_2 [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)11633;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
