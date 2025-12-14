#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2524929989U;
unsigned int var_2 = 1452282374U;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)172;
int var_9 = -818522920;
unsigned int var_10 = 2390240690U;
unsigned short var_15 = (unsigned short)29536;
int var_17 = -183162102;
long long int var_18 = -6058791250010099817LL;
int zero = 0;
signed char var_19 = (signed char)17;
unsigned long long int var_20 = 13073598042344044906ULL;
unsigned short var_21 = (unsigned short)21077;
short var_22 = (short)-30706;
signed char var_23 = (signed char)-1;
unsigned int var_24 = 4015451937U;
signed char arr_2 [11] ;
int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1742650753;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
