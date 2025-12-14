#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)251;
long long int var_4 = 8913693491864719918LL;
short var_5 = (short)3016;
signed char var_8 = (signed char)-106;
unsigned int var_9 = 2395220975U;
int zero = 0;
short var_10 = (short)-22802;
unsigned short var_11 = (unsigned short)64668;
unsigned int var_12 = 518157180U;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5633160260855322585LL;
unsigned int var_15 = 2604672930U;
short arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-3478;
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
