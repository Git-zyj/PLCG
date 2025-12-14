#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2748086478U;
short var_2 = (short)-8174;
unsigned long long int var_10 = 1013125042741877600ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)8105;
signed char var_21 = (signed char)-31;
_Bool var_22 = (_Bool)1;
long long int var_23 = 6986509556500878334LL;
unsigned char var_24 = (unsigned char)255;
long long int var_25 = -3908458122079675381LL;
unsigned short arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)58461;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
