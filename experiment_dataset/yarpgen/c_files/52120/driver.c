#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
unsigned char var_1 = (unsigned char)105;
signed char var_2 = (signed char)-11;
signed char var_3 = (signed char)-65;
signed char var_4 = (signed char)-36;
unsigned char var_5 = (unsigned char)113;
unsigned char var_6 = (unsigned char)215;
unsigned char var_8 = (unsigned char)78;
int zero = 0;
unsigned char var_10 = (unsigned char)117;
long long int var_11 = 2903620881907157901LL;
signed char var_12 = (signed char)9;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)115;
unsigned char var_16 = (unsigned char)189;
signed char var_17 = (signed char)34;
signed char var_18 = (signed char)8;
unsigned char var_19 = (unsigned char)207;
signed char var_20 = (signed char)-73;
unsigned char arr_0 [20] [20] ;
unsigned char arr_3 [20] [20] ;
long long int arr_4 [20] [20] ;
unsigned char arr_11 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -1439880500771695053LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)107;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
