#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14163961936189210368ULL;
unsigned int var_2 = 280352414U;
int var_5 = 428681488;
unsigned long long int var_6 = 9568987049401207057ULL;
unsigned long long int var_7 = 16215718982682041154ULL;
long long int var_8 = -816682246898217780LL;
unsigned short var_10 = (unsigned short)38537;
int zero = 0;
unsigned long long int var_11 = 9319240326855144989ULL;
signed char var_12 = (signed char)-112;
unsigned long long int var_13 = 12853605209491439563ULL;
unsigned long long int var_14 = 1303536699877301614ULL;
unsigned long long int var_15 = 5302418314449892623ULL;
_Bool arr_1 [20] ;
long long int arr_3 [20] [20] [20] ;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -4629591988923086583LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)-358;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
