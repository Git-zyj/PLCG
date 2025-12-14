#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 201895833U;
unsigned char var_8 = (unsigned char)37;
signed char var_10 = (signed char)-104;
short var_12 = (short)10827;
unsigned int var_14 = 2347845260U;
unsigned char var_15 = (unsigned char)243;
int zero = 0;
unsigned char var_19 = (unsigned char)189;
unsigned long long int var_20 = 14099405947178781309ULL;
int var_21 = -1960602552;
unsigned char var_22 = (unsigned char)168;
long long int var_23 = -374598148496541742LL;
unsigned char arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)169;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
