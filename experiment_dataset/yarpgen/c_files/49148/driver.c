#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15855437043551939643ULL;
short var_9 = (short)12007;
int zero = 0;
unsigned long long int var_11 = 4466545094549410848ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10171578252379946175ULL;
unsigned char var_14 = (unsigned char)95;
long long int var_15 = -3201645630096515030LL;
unsigned short var_16 = (unsigned short)35930;
unsigned char var_17 = (unsigned char)82;
int arr_0 [16] ;
short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2127009637;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)24115;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
