#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4192884561U;
int var_4 = -1003590672;
short var_5 = (short)25123;
unsigned char var_7 = (unsigned char)136;
short var_16 = (short)16303;
unsigned int var_19 = 1719303352U;
int zero = 0;
long long int var_20 = 3269879403505591161LL;
int var_21 = 316001721;
signed char var_22 = (signed char)119;
short var_23 = (short)-21048;
short var_24 = (short)15475;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-83;
long long int arr_1 [18] [18] ;
signed char arr_2 [18] ;
unsigned int arr_3 [18] ;
long long int arr_4 [18] ;
short arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5197271532308468328LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3692746907U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -3083508961783139358LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)4684;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
