#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10096;
long long int var_1 = 2666497930740759606LL;
unsigned int var_5 = 1620355870U;
int var_7 = -101213102;
unsigned char var_8 = (unsigned char)220;
int zero = 0;
long long int var_11 = 7604605567681114625LL;
unsigned char var_12 = (unsigned char)110;
unsigned char var_13 = (unsigned char)55;
_Bool arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
