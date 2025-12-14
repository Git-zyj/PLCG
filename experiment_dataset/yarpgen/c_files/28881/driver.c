#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17472734941785191434ULL;
signed char var_3 = (signed char)110;
signed char var_4 = (signed char)-37;
int var_5 = -1480463322;
signed char var_7 = (signed char)-30;
unsigned long long int var_8 = 16129692289118352499ULL;
int zero = 0;
signed char var_10 = (signed char)58;
unsigned long long int var_11 = 2558874976831819522ULL;
unsigned char var_12 = (unsigned char)149;
_Bool var_13 = (_Bool)1;
int var_14 = -593117919;
signed char var_15 = (signed char)-57;
unsigned char var_16 = (unsigned char)196;
unsigned int var_17 = 2427353240U;
long long int var_18 = -8125163516381312318LL;
signed char arr_0 [21] ;
unsigned long long int arr_4 [21] [21] ;
unsigned int arr_6 [21] [21] [21] ;
int arr_8 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 1237572658133378736ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3907066518U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1235757351;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
