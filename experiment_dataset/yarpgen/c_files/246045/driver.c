#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)98;
int var_3 = -752377711;
unsigned short var_5 = (unsigned short)19899;
int var_6 = 1889126657;
short var_7 = (short)-12050;
unsigned short var_8 = (unsigned short)7685;
signed char var_9 = (signed char)117;
unsigned short var_11 = (unsigned short)48752;
unsigned short var_12 = (unsigned short)39692;
int var_14 = 1332062613;
unsigned int var_16 = 807357302U;
unsigned int var_17 = 1752946961U;
int zero = 0;
unsigned long long int var_18 = 4202451149521509882ULL;
int var_19 = -1256094513;
long long int var_20 = 8067337542249179270LL;
short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)985 : (short)22590;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
