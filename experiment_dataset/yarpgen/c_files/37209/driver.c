#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)43662;
int var_3 = 637922346;
long long int var_7 = -5655986054560053593LL;
short var_8 = (short)3874;
unsigned long long int var_9 = 17546789249533910679ULL;
int zero = 0;
signed char var_10 = (signed char)-115;
unsigned int var_11 = 36452409U;
signed char var_12 = (signed char)5;
unsigned char var_13 = (unsigned char)152;
unsigned int var_14 = 1451537264U;
short var_15 = (short)3811;
unsigned short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)45166;
}

void checksum() {
    hash(&seed, var_10);
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
