#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1367407457853069378LL;
_Bool var_1 = (_Bool)1;
short var_11 = (short)-22863;
unsigned short var_12 = (unsigned short)34072;
unsigned short var_13 = (unsigned short)57174;
signed char var_16 = (signed char)108;
unsigned char var_18 = (unsigned char)2;
int zero = 0;
signed char var_20 = (signed char)74;
short var_21 = (short)-12983;
int var_22 = -2131051698;
unsigned int var_23 = 3977850009U;
_Bool var_24 = (_Bool)1;
unsigned char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)128;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
