#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2661757262562284521LL;
unsigned int var_5 = 535604991U;
unsigned short var_7 = (unsigned short)50053;
int var_14 = 1341416284;
int zero = 0;
int var_17 = 1630229245;
unsigned char var_18 = (unsigned char)41;
int var_19 = 2066021986;
unsigned long long int var_20 = 14233081566968671022ULL;
signed char var_21 = (signed char)103;
unsigned short var_22 = (unsigned short)9776;
unsigned int var_23 = 1121230955U;
_Bool arr_0 [11] ;
signed char arr_5 [25] ;
signed char arr_11 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)19;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
