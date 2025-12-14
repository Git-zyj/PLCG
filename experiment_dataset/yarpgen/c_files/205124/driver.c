#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)10543;
unsigned long long int var_10 = 10546155432597251326ULL;
signed char var_11 = (signed char)41;
short var_12 = (short)-5643;
int zero = 0;
signed char var_15 = (signed char)10;
unsigned char var_16 = (unsigned char)247;
signed char var_17 = (signed char)114;
long long int var_18 = 4243571305067495562LL;
unsigned int var_19 = 3560498568U;
signed char arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)24;
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
