#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_6 = 2026866160801888053LL;
signed char var_7 = (signed char)-125;
unsigned long long int var_9 = 13200782838867695959ULL;
long long int var_14 = 3739834422244164005LL;
unsigned short var_15 = (unsigned short)28421;
int var_16 = -1464573156;
signed char var_17 = (signed char)19;
short var_19 = (short)32187;
int zero = 0;
unsigned char var_20 = (unsigned char)109;
unsigned long long int var_21 = 3847881018245200713ULL;
int var_22 = 1541150807;
int var_23 = 529438430;
_Bool arr_0 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)3831;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
