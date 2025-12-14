#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1046516011665375268LL;
unsigned short var_6 = (unsigned short)61390;
unsigned long long int var_7 = 4885304689764167897ULL;
unsigned long long int var_15 = 8332386883766958648ULL;
unsigned short var_17 = (unsigned short)64867;
int zero = 0;
unsigned char var_20 = (unsigned char)48;
int var_21 = 541702935;
unsigned int var_22 = 2945943524U;
long long int arr_0 [24] ;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 8093337431356251548LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-9134;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
