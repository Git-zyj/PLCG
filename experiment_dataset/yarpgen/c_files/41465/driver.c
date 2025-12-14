#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
short var_1 = (short)-19932;
short var_2 = (short)-1863;
signed char var_6 = (signed char)-104;
signed char var_9 = (signed char)-113;
signed char var_11 = (signed char)-7;
signed char var_12 = (signed char)78;
unsigned long long int var_13 = 10766751776476317507ULL;
int zero = 0;
long long int var_14 = -3637648098887798966LL;
long long int var_15 = -6278996954053229660LL;
int var_16 = 1172156616;
_Bool var_17 = (_Bool)0;
short var_18 = (short)7306;
long long int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8035089590328983001LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
