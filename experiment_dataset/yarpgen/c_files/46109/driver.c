#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 828901936385626758ULL;
signed char var_2 = (signed char)33;
short var_3 = (short)16940;
long long int var_5 = -4308610875711407090LL;
short var_7 = (short)25118;
signed char var_12 = (signed char)65;
signed char var_13 = (signed char)3;
int zero = 0;
unsigned long long int var_14 = 12569881173599786303ULL;
signed char var_15 = (signed char)-77;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5906486837417260553ULL;
unsigned long long int var_18 = 1402841292162966998ULL;
short var_19 = (short)11090;
long long int var_20 = -2029631435839376653LL;
signed char var_21 = (signed char)1;
signed char var_22 = (signed char)51;
short arr_6 [25] [25] [25] ;
unsigned int arr_13 [25] [25] [25] [25] [25] ;
unsigned long long int arr_15 [11] [11] ;
signed char arr_27 [11] ;
signed char arr_28 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-30049;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 1081780478U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = 6935096889220402324ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (signed char)-113;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
