#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3383130644572535215ULL;
short var_4 = (short)25359;
unsigned short var_7 = (unsigned short)12807;
signed char var_8 = (signed char)79;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 4163792285U;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)76;
unsigned short var_19 = (unsigned short)33414;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)127;
unsigned char var_22 = (unsigned char)207;
unsigned long long int var_23 = 4574406288668979410ULL;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)62960;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
