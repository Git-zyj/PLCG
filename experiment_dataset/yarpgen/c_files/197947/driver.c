#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7089043884357681092ULL;
unsigned int var_2 = 3351234279U;
long long int var_3 = 8511066929715570006LL;
signed char var_8 = (signed char)13;
unsigned char var_9 = (unsigned char)113;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 9759509330088947703ULL;
unsigned short var_17 = (unsigned short)32500;
short var_18 = (short)31271;
short var_19 = (short)-30177;
long long int var_20 = 5454593743253289354LL;
unsigned long long int var_21 = 6533836547922307096ULL;
unsigned short var_22 = (unsigned short)57190;
unsigned long long int arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned long long int arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 11383653715603848629ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)37326;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 3076781459931813717ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
