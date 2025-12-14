#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)238;
unsigned short var_1 = (unsigned short)8224;
unsigned char var_2 = (unsigned char)177;
unsigned short var_3 = (unsigned short)418;
int var_4 = -1077018308;
signed char var_5 = (signed char)-106;
long long int var_6 = -3578327215310988924LL;
long long int var_7 = 7780637005711740928LL;
signed char var_8 = (signed char)-68;
unsigned long long int var_9 = 676242365224047047ULL;
unsigned short var_10 = (unsigned short)12732;
int zero = 0;
unsigned long long int var_11 = 9524000826400267776ULL;
unsigned short var_12 = (unsigned short)53540;
int var_13 = 2037448554;
signed char var_14 = (signed char)35;
unsigned char var_15 = (unsigned char)107;
_Bool arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
