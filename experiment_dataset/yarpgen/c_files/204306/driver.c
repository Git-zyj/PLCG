#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27153;
unsigned int var_2 = 646941175U;
_Bool var_5 = (_Bool)0;
int var_8 = -663772402;
int var_9 = 1177409483;
unsigned short var_11 = (unsigned short)12924;
short var_17 = (short)21453;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
unsigned short var_20 = (unsigned short)23604;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)182;
unsigned char arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2747416392U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
