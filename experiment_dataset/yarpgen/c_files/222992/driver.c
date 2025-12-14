#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1909649415U;
long long int var_2 = -3996039088524817659LL;
unsigned short var_3 = (unsigned short)48204;
unsigned short var_6 = (unsigned short)45730;
long long int var_9 = 7280708285408279954LL;
unsigned int var_10 = 2606113852U;
signed char var_14 = (signed char)65;
int zero = 0;
long long int var_18 = -5545356256534182963LL;
unsigned int var_19 = 845369111U;
short var_20 = (short)16027;
unsigned int var_21 = 959130193U;
int var_22 = -1949658582;
unsigned int arr_0 [19] [19] ;
long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 513594588U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 372552636156172737LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
