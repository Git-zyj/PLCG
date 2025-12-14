#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3329478819U;
int var_3 = 1532579972;
short var_4 = (short)5390;
int var_6 = 889528976;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 6848796474939426796ULL;
signed char var_11 = (signed char)62;
int zero = 0;
signed char var_13 = (signed char)-48;
unsigned short var_14 = (unsigned short)28666;
unsigned char var_15 = (unsigned char)246;
unsigned int var_16 = 3379406954U;
signed char arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)50;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
