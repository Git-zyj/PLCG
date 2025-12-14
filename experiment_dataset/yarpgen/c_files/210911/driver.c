#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)23155;
unsigned long long int var_9 = 15483395589111643586ULL;
unsigned long long int var_10 = 8338685952210935847ULL;
short var_11 = (short)-8854;
int var_12 = -441463040;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 14572022967346615689ULL;
short var_17 = (short)-6645;
int var_18 = 935476664;
short var_19 = (short)1717;
signed char var_20 = (signed char)-110;
_Bool arr_1 [10] ;
unsigned char arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)10;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
