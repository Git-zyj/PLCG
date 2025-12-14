#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9419979725931987331ULL;
int var_7 = 909695747;
int var_10 = 2123072316;
int zero = 0;
unsigned long long int var_11 = 12532316595614000306ULL;
unsigned long long int var_12 = 3728232067405049475ULL;
unsigned long long int var_13 = 18051136249461691289ULL;
int var_14 = 436875053;
int var_15 = -621152555;
unsigned long long int var_16 = 17635225702645172282ULL;
int var_17 = -95949446;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_8 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 13326670388241583260ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11103131090344139636ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
