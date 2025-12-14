#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10500;
short var_2 = (short)-11033;
int var_4 = -238051257;
signed char var_5 = (signed char)74;
signed char var_6 = (signed char)121;
unsigned long long int var_7 = 7297295335870918991ULL;
int var_9 = 1358846591;
unsigned char var_10 = (unsigned char)14;
int zero = 0;
short var_12 = (short)12224;
long long int var_13 = 8081470733765418953LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)189;
unsigned char var_16 = (unsigned char)94;
unsigned int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 480712735U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
