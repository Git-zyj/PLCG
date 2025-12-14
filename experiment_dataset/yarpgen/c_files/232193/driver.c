#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 7784900710690860237ULL;
short var_12 = (short)18838;
unsigned int var_17 = 3322522358U;
int zero = 0;
unsigned int var_18 = 2061447150U;
unsigned long long int var_19 = 252783506729941432ULL;
unsigned long long int var_20 = 13659746168344889333ULL;
unsigned long long int var_21 = 9200170232288990641ULL;
unsigned short var_22 = (unsigned short)8254;
short var_23 = (short)17676;
unsigned int var_24 = 2890586983U;
long long int var_25 = 5286874165871157416LL;
unsigned int arr_2 [18] ;
signed char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2840030506U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-80;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
