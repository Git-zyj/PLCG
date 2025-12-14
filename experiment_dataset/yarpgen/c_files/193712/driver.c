#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3483384532U;
signed char var_5 = (signed char)89;
unsigned long long int var_9 = 5342165315695060604ULL;
unsigned long long int var_10 = 4857834480452992135ULL;
unsigned char var_11 = (unsigned char)157;
int var_12 = 1190784477;
short var_14 = (short)-15579;
signed char var_15 = (signed char)22;
int zero = 0;
short var_16 = (short)9916;
short var_17 = (short)-13577;
unsigned long long int var_18 = 17991125131799993725ULL;
unsigned int var_19 = 1411628847U;
unsigned int var_20 = 1122057113U;
short var_21 = (short)1547;
int var_22 = 570169830;
short arr_0 [23] ;
unsigned int arr_10 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-22320;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1790009230U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
