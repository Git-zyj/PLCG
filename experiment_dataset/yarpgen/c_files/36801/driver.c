#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)65;
long long int var_7 = 6843593018500084035LL;
long long int var_10 = -3564378925758177929LL;
int var_12 = 1487982399;
unsigned int var_14 = 194374761U;
int zero = 0;
unsigned short var_15 = (unsigned short)52916;
unsigned int var_16 = 4060683827U;
signed char var_17 = (signed char)-77;
int var_18 = -1908151144;
signed char var_19 = (signed char)-108;
signed char arr_1 [10] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
