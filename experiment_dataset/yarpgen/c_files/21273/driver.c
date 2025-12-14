#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3253720397941311991LL;
signed char var_1 = (signed char)-84;
unsigned short var_3 = (unsigned short)44652;
signed char var_4 = (signed char)106;
signed char var_6 = (signed char)-5;
unsigned short var_8 = (unsigned short)32644;
signed char var_9 = (signed char)3;
int var_10 = -670766860;
unsigned char var_11 = (unsigned char)36;
int var_12 = 959782393;
int zero = 0;
unsigned long long int var_14 = 4636683535337218705ULL;
unsigned short var_15 = (unsigned short)5922;
unsigned int var_16 = 3736334106U;
short var_17 = (short)10930;
unsigned long long int var_18 = 16369803745276738559ULL;
unsigned char var_19 = (unsigned char)95;
unsigned int var_20 = 1467580714U;
unsigned int arr_0 [17] ;
short arr_1 [17] [17] ;
short arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2179768266U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)12237;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)11777 : (short)-24590;
}

void checksum() {
    hash(&seed, var_14);
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
