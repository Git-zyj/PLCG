#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1755392568;
unsigned int var_4 = 349929955U;
unsigned short var_6 = (unsigned short)23413;
unsigned int var_8 = 940464982U;
unsigned short var_10 = (unsigned short)47449;
unsigned long long int var_12 = 12329183603902113467ULL;
long long int var_17 = -69580571139711985LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-93;
unsigned long long int var_21 = 14963055019804184327ULL;
unsigned short var_22 = (unsigned short)52353;
_Bool arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
