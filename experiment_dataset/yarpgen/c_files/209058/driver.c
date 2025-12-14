#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
unsigned long long int var_1 = 9926068236058965578ULL;
long long int var_4 = 2175183582684926436LL;
int var_7 = -600364367;
int zero = 0;
unsigned int var_14 = 3821201562U;
short var_15 = (short)24526;
unsigned long long int var_16 = 17854674241090510049ULL;
unsigned long long int var_17 = 153944150777191625ULL;
signed char var_18 = (signed char)41;
unsigned long long int var_19 = 14286620326668772748ULL;
short arr_2 [20] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)25899;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)92;
}

void checksum() {
    hash(&seed, var_14);
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
