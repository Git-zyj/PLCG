#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3222378899U;
short var_3 = (short)-21522;
short var_4 = (short)32130;
long long int var_5 = 2282460324280742018LL;
signed char var_6 = (signed char)-126;
signed char var_11 = (signed char)-115;
int zero = 0;
short var_17 = (short)-4795;
unsigned short var_18 = (unsigned short)63121;
unsigned int var_19 = 1404077658U;
unsigned short var_20 = (unsigned short)15906;
unsigned int var_21 = 2153087399U;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 18394952356220155981ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
