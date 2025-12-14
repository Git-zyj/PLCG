#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)101;
unsigned char var_10 = (unsigned char)21;
unsigned long long int var_11 = 15123561989124871202ULL;
unsigned long long int var_14 = 7093259370441192644ULL;
signed char var_15 = (signed char)-2;
unsigned long long int var_16 = 5883837363393612128ULL;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
unsigned long long int var_19 = 8814968893611909436ULL;
unsigned long long int var_20 = 11774692485049151939ULL;
unsigned long long int var_21 = 15654236302995807463ULL;
unsigned long long int arr_0 [19] [19] ;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 8041582451829289649ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-93;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
