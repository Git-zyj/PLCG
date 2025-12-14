#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6;
unsigned char var_1 = (unsigned char)204;
int var_2 = 79777399;
signed char var_3 = (signed char)-35;
unsigned long long int var_7 = 2118182671292942262ULL;
int var_9 = -505740519;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)233;
unsigned long long int var_16 = 2374894937358409472ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)1044;
signed char var_18 = (signed char)-102;
int var_19 = -1989170780;
short var_20 = (short)-28400;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)154;
signed char arr_0 [13] ;
long long int arr_1 [13] ;
unsigned int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-85 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -5344576532292139748LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2728127838U : 4830511U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
