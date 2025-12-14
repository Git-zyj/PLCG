#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1639089724U;
signed char var_3 = (signed char)94;
unsigned int var_7 = 1558474772U;
unsigned short var_13 = (unsigned short)24064;
unsigned int var_16 = 2562789227U;
int zero = 0;
unsigned short var_18 = (unsigned short)14539;
unsigned long long int var_19 = 2353292754550877995ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2821526499U;
int var_22 = 1448879828;
long long int var_23 = 7175910757676243514LL;
int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -8415520;
}

void checksum() {
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
