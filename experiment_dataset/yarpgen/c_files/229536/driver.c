#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15951;
unsigned short var_1 = (unsigned short)61706;
short var_4 = (short)-21981;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-21880;
unsigned char var_9 = (unsigned char)3;
unsigned char var_10 = (unsigned char)138;
short var_11 = (short)-23185;
signed char var_12 = (signed char)-45;
int zero = 0;
int var_13 = 1413362568;
signed char var_14 = (signed char)6;
long long int var_15 = -6671934749416699586LL;
unsigned char var_16 = (unsigned char)202;
unsigned char arr_0 [14] ;
unsigned char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)10;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
