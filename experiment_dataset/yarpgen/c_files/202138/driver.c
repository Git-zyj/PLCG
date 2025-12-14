#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 18733058;
unsigned short var_3 = (unsigned short)39954;
unsigned long long int var_4 = 9553452695718985965ULL;
int var_6 = 23109000;
int var_9 = -2081996368;
unsigned int var_11 = 1562128777U;
unsigned long long int var_12 = 14804158011352003568ULL;
int var_13 = -651335955;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)12;
unsigned long long int var_16 = 11509476642220322219ULL;
unsigned char var_17 = (unsigned char)141;
int var_18 = -1635644386;
unsigned int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1944139510U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
