#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
signed char var_1 = (signed char)-92;
int var_2 = 727451959;
short var_4 = (short)1378;
unsigned short var_5 = (unsigned short)38733;
unsigned short var_6 = (unsigned short)32056;
signed char var_7 = (signed char)-16;
unsigned char var_8 = (unsigned char)56;
unsigned long long int var_9 = 17739662258279433795ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)134;
int var_11 = 312184744;
unsigned int var_12 = 2138937609U;
signed char var_13 = (signed char)15;
signed char var_14 = (signed char)-102;
long long int arr_1 [21] [21] ;
unsigned int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -3714748786529216557LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3128281298U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
