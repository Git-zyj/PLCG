#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)94;
unsigned int var_5 = 2646527265U;
int var_6 = 1057692016;
unsigned int var_7 = 199331136U;
int var_8 = -335087091;
long long int var_10 = -7040587460156970703LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)13603;
int var_16 = -28539728;
unsigned int var_17 = 3858994858U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)188;
int var_20 = 44758476;
unsigned char var_21 = (unsigned char)255;
long long int arr_2 [15] ;
unsigned char arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2931098323606307799LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)99;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
