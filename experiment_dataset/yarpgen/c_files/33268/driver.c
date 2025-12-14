#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned int var_4 = 1939650950U;
long long int var_8 = -4005524578828537022LL;
unsigned int var_10 = 2201568867U;
int zero = 0;
unsigned long long int var_11 = 9459399134696189665ULL;
signed char var_12 = (signed char)-121;
long long int var_13 = 1570506891716868372LL;
signed char var_14 = (signed char)-79;
signed char var_15 = (signed char)12;
signed char var_16 = (signed char)77;
signed char arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-18;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
