#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1925125646U;
unsigned int var_1 = 2572268497U;
unsigned int var_2 = 404033016U;
signed char var_3 = (signed char)-49;
signed char var_4 = (signed char)101;
signed char var_5 = (signed char)121;
signed char var_6 = (signed char)-45;
signed char var_7 = (signed char)23;
signed char var_9 = (signed char)88;
signed char var_11 = (signed char)45;
signed char var_14 = (signed char)121;
int zero = 0;
signed char var_16 = (signed char)53;
unsigned int var_17 = 1614122471U;
unsigned int var_18 = 2300379628U;
unsigned int var_19 = 3908926757U;
unsigned int var_20 = 246186172U;
unsigned int arr_11 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1621468471U : 3445294100U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
