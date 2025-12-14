#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6973484391516137097LL;
short var_5 = (short)23753;
short var_6 = (short)18417;
short var_7 = (short)-2085;
_Bool var_9 = (_Bool)0;
long long int var_10 = 806670666607898309LL;
int zero = 0;
unsigned long long int var_15 = 4042553026360698718ULL;
unsigned char var_16 = (unsigned char)36;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-28127;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)83;
unsigned char arr_0 [23] ;
unsigned char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)235 : (unsigned char)21;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
