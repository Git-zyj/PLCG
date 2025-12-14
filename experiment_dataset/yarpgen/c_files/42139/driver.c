#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1610131729;
unsigned int var_1 = 3969517993U;
long long int var_2 = 7581396006622033941LL;
unsigned char var_4 = (unsigned char)198;
long long int var_5 = 8873737088908328235LL;
short var_6 = (short)20625;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2926227680U;
int var_9 = 978952226;
long long int var_10 = 4699527362776874754LL;
long long int var_12 = 4164694312498570176LL;
int zero = 0;
int var_13 = 770211153;
unsigned short var_14 = (unsigned short)63956;
unsigned short var_15 = (unsigned short)11095;
unsigned short var_16 = (unsigned short)31025;
unsigned int var_17 = 1314520160U;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1345061864531027331LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
