#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
short var_2 = (short)-21186;
int var_4 = -1947303596;
short var_5 = (short)8333;
short var_7 = (short)11459;
signed char var_8 = (signed char)121;
unsigned long long int var_11 = 8833139655702400285ULL;
unsigned char var_12 = (unsigned char)161;
short var_13 = (short)-19037;
int zero = 0;
unsigned long long int var_14 = 10287814159541947070ULL;
long long int var_15 = -2603121938747799885LL;
long long int var_16 = -7149436916675658741LL;
long long int var_17 = 359185591773044890LL;
unsigned int var_18 = 978058466U;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)953;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
