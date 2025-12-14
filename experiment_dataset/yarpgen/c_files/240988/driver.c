#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
unsigned long long int var_1 = 5177510415254995317ULL;
unsigned char var_2 = (unsigned char)33;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-74;
signed char var_8 = (signed char)90;
long long int var_10 = -5443335419605631383LL;
unsigned int var_11 = 835747581U;
signed char var_13 = (signed char)-109;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)25426;
signed char var_16 = (signed char)24;
unsigned int var_17 = 2700248746U;
unsigned short var_18 = (unsigned short)37783;
unsigned short var_19 = (unsigned short)19718;
unsigned short var_20 = (unsigned short)14706;
long long int arr_1 [22] ;
unsigned int arr_2 [22] ;
int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 7730647693624477172LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 2209650807U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -974069804;
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
