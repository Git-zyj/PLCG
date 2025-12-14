#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61917;
short var_5 = (short)13849;
short var_6 = (short)-29618;
short var_10 = (short)-13156;
unsigned short var_11 = (unsigned short)20507;
unsigned long long int var_13 = 2726382190745918339ULL;
int zero = 0;
short var_16 = (short)3781;
unsigned int var_17 = 110958197U;
unsigned int var_18 = 2306761097U;
short var_19 = (short)-21010;
unsigned long long int var_20 = 5468100885126254739ULL;
unsigned short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)51334;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
