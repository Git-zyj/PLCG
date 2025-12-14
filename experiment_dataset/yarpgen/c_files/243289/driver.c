#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1036250143U;
signed char var_3 = (signed char)-49;
unsigned int var_5 = 645336997U;
long long int var_8 = -7273458196796551913LL;
signed char var_9 = (signed char)-70;
unsigned int var_10 = 4117467183U;
unsigned char var_12 = (unsigned char)31;
int zero = 0;
signed char var_14 = (signed char)-55;
unsigned long long int var_15 = 2647126922966339668ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)13164;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
