#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = -1408891955;
unsigned short var_5 = (unsigned short)10063;
signed char var_9 = (signed char)113;
short var_10 = (short)1979;
short var_11 = (short)-4285;
unsigned char var_12 = (unsigned char)110;
int zero = 0;
unsigned char var_14 = (unsigned char)214;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12960851228745081365ULL;
signed char var_17 = (signed char)-65;
int var_18 = -164769550;
short arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)17566;
}

void checksum() {
    hash(&seed, var_14);
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
