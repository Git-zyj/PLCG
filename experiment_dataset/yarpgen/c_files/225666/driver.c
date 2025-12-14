#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1732113156U;
unsigned short var_1 = (unsigned short)64034;
signed char var_2 = (signed char)37;
signed char var_4 = (signed char)110;
_Bool var_8 = (_Bool)0;
short var_9 = (short)837;
short var_11 = (short)9523;
signed char var_13 = (signed char)107;
unsigned short var_15 = (unsigned short)57478;
unsigned short var_16 = (unsigned short)20668;
int var_17 = 1022621788;
int var_18 = -304989116;
int zero = 0;
unsigned char var_20 = (unsigned char)242;
short var_21 = (short)29004;
unsigned int var_22 = 3123142476U;
signed char var_23 = (signed char)80;
int var_24 = -157243259;
short var_25 = (short)-9051;
unsigned short var_26 = (unsigned short)35764;
int var_27 = -1242317251;
unsigned char arr_0 [18] ;
long long int arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 3626007229613606396LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
