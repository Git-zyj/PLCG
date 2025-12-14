#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9192536961812499252ULL;
long long int var_8 = -2738151579954082432LL;
unsigned long long int var_12 = 14919799095424693923ULL;
unsigned long long int var_13 = 4303674592871230023ULL;
int var_15 = -1215484706;
long long int var_16 = -679642546280452772LL;
int var_18 = 560707866;
int zero = 0;
short var_20 = (short)18404;
unsigned long long int var_21 = 4628262313832826352ULL;
unsigned char var_22 = (unsigned char)236;
unsigned char var_23 = (unsigned char)146;
short arr_0 [20] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-29375;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 319783622 : -663473927;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
