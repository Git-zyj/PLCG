#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_8 = 2297720627263283922LL;
long long int var_13 = -5959230219944822327LL;
unsigned long long int var_14 = 3241687066720829385ULL;
unsigned char var_15 = (unsigned char)167;
short var_16 = (short)29734;
short var_17 = (short)-26272;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)25368;
signed char var_21 = (signed char)72;
signed char var_22 = (signed char)-90;
unsigned char var_23 = (unsigned char)140;
long long int var_24 = 2748934965463140051LL;
_Bool var_25 = (_Bool)0;
_Bool arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
