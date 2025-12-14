#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61883;
unsigned int var_1 = 3623256466U;
unsigned long long int var_3 = 8218615549950832900ULL;
unsigned char var_5 = (unsigned char)161;
unsigned char var_9 = (unsigned char)57;
int var_11 = 67984561;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 10673136606608376241ULL;
short var_17 = (short)-8436;
unsigned long long int var_18 = 5284918497572444022ULL;
long long int var_19 = -4712382562303453837LL;
unsigned int var_20 = 1545833384U;
unsigned int var_21 = 1434991885U;
long long int var_22 = -4595700284098574325LL;
short arr_7 [11] [11] [11] ;
unsigned char arr_12 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)27974;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)164;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
