#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned long long int var_2 = 327974237354457840ULL;
short var_5 = (short)3657;
unsigned long long int var_9 = 6512655417178658538ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)61561;
signed char var_12 = (signed char)-124;
unsigned int var_14 = 3770029825U;
int zero = 0;
long long int var_16 = -1810925432942468486LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1285982430U;
long long int var_19 = -6375765109093115234LL;
_Bool arr_0 [22] ;
signed char arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)49;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
