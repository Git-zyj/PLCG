#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2892;
short var_1 = (short)3090;
int var_8 = 1627296657;
_Bool var_9 = (_Bool)0;
int var_10 = 1833744710;
unsigned long long int var_15 = 14076579340119389421ULL;
short var_17 = (short)25892;
long long int var_18 = -7299993109251489698LL;
int zero = 0;
signed char var_19 = (signed char)-111;
_Bool var_20 = (_Bool)0;
short var_21 = (short)16435;
signed char arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)17;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
