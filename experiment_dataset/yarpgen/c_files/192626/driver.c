#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
long long int var_1 = 240510802909370899LL;
unsigned char var_2 = (unsigned char)124;
signed char var_3 = (signed char)-32;
long long int var_6 = -200180199633752818LL;
long long int var_7 = -2761159415352723677LL;
long long int var_8 = -3351279969232901963LL;
signed char var_9 = (signed char)59;
int zero = 0;
short var_10 = (short)-4371;
int var_11 = 863364291;
int var_12 = 1676894373;
unsigned char arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
long long int arr_3 [16] ;
short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 6481748943580016449ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 272867159566517302LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)15910;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
