#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6340;
short var_4 = (short)27757;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 12369483883232277782ULL;
signed char var_9 = (signed char)-108;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6863024849397808806LL;
unsigned short var_14 = (unsigned short)57881;
int zero = 0;
unsigned char var_19 = (unsigned char)138;
int var_20 = -1629905972;
int var_21 = -1780344151;
unsigned char arr_2 [23] ;
_Bool arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)48 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
