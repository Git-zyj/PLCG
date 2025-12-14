#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32099;
unsigned char var_1 = (unsigned char)167;
unsigned long long int var_2 = 16144475618875153310ULL;
long long int var_3 = 8608830493189298797LL;
short var_5 = (short)15016;
unsigned int var_6 = 2305863977U;
short var_8 = (short)7529;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)63;
int var_11 = -19980660;
unsigned short var_12 = (unsigned short)25101;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)56248;
unsigned short var_15 = (unsigned short)4521;
_Bool arr_0 [13] ;
int arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -1208048156;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)46649;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
