#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
long long int var_1 = 1645003920248161339LL;
unsigned int var_3 = 2970779423U;
unsigned long long int var_4 = 13784186923521022189ULL;
long long int var_5 = 8759113244495394009LL;
int var_6 = 1709673414;
unsigned long long int var_9 = 5666526301456698454ULL;
short var_13 = (short)-11108;
int var_14 = 993145916;
int var_15 = -1436202432;
long long int var_16 = -4499215060734775966LL;
int zero = 0;
long long int var_17 = 828990743363098795LL;
_Bool var_18 = (_Bool)1;
int var_19 = -707405487;
long long int var_20 = 7316949600811766979LL;
unsigned long long int var_21 = 1368015699340183240ULL;
int var_22 = -173288652;
unsigned long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 13926301177467573035ULL : 1599925551239073416ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
