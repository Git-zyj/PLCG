#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32381;
unsigned char var_2 = (unsigned char)133;
signed char var_4 = (signed char)48;
unsigned int var_5 = 1369978136U;
unsigned long long int var_10 = 15209426509135393264ULL;
signed char var_15 = (signed char)-94;
int var_18 = -1439976037;
int zero = 0;
signed char var_20 = (signed char)-17;
unsigned char var_21 = (unsigned char)21;
int var_22 = -1764859159;
short arr_1 [11] ;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)32479;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -374197091 : 1489811239;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
