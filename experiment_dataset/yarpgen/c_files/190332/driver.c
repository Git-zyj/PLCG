#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)78;
signed char var_4 = (signed char)-3;
unsigned long long int var_5 = 14445702596586422688ULL;
unsigned int var_6 = 239548165U;
unsigned long long int var_7 = 12756095573486555578ULL;
short var_8 = (short)-29302;
unsigned int var_9 = 1047777570U;
short var_10 = (short)19110;
int zero = 0;
unsigned long long int var_11 = 952255476736346014ULL;
long long int var_12 = -857497744326142840LL;
unsigned int var_13 = 2844873428U;
unsigned int var_14 = 937168477U;
long long int arr_8 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7744708178975804336LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
