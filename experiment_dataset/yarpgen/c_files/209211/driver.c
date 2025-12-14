#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1807166748;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)9;
unsigned long long int var_10 = 16150400799966464069ULL;
unsigned char var_12 = (unsigned char)166;
unsigned int var_14 = 1849238114U;
unsigned char var_15 = (unsigned char)207;
unsigned short var_17 = (unsigned short)44376;
int zero = 0;
int var_18 = -1555089013;
signed char var_19 = (signed char)-39;
unsigned char var_20 = (unsigned char)164;
int var_21 = 525299534;
short arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-8141;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
