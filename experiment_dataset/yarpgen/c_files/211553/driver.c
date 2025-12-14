#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
unsigned int var_2 = 2326354313U;
unsigned char var_3 = (unsigned char)44;
long long int var_4 = 545839951118808856LL;
short var_5 = (short)-6283;
int zero = 0;
unsigned long long int var_10 = 9565891197942974985ULL;
int var_11 = 556781441;
signed char var_12 = (signed char)11;
signed char var_13 = (signed char)126;
signed char var_14 = (signed char)-28;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 11500851558237898475ULL : 16882724971415901130ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
