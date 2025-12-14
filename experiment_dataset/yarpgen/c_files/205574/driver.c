#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2132992885485871194ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 6249306458596049821ULL;
int var_15 = 2133272211;
int var_16 = 1651777779;
int zero = 0;
signed char var_18 = (signed char)12;
unsigned int var_19 = 2729848844U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4843321465098762819ULL;
unsigned short var_22 = (unsigned short)62494;
unsigned short var_23 = (unsigned short)61772;
unsigned long long int var_24 = 1374274680095207931ULL;
short arr_0 [25] ;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)32661;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2113181889;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
