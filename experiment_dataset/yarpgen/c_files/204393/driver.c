#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)54086;
long long int var_4 = 5544836837928375457LL;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-11;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 4757967377666022931ULL;
int zero = 0;
unsigned int var_15 = 2963618550U;
int var_16 = -1668313108;
long long int var_17 = 2715782205719557302LL;
int var_18 = -74190748;
unsigned char arr_0 [14] ;
unsigned char arr_2 [14] [14] ;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-2893;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
