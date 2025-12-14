#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10797361462876954993ULL;
unsigned short var_9 = (unsigned short)25931;
signed char var_10 = (signed char)121;
unsigned char var_13 = (unsigned char)20;
short var_14 = (short)-32160;
int zero = 0;
unsigned char var_18 = (unsigned char)125;
signed char var_19 = (signed char)116;
unsigned short var_20 = (unsigned short)9518;
signed char var_21 = (signed char)63;
unsigned long long int var_22 = 18360938212735774103ULL;
unsigned short arr_0 [11] [11] ;
short arr_1 [11] ;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)46899;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)12700;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 16724648792702096986ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
