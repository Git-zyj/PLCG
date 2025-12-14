#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8259330458497140970LL;
long long int var_1 = -221085387483517698LL;
short var_3 = (short)-12227;
unsigned short var_7 = (unsigned short)15502;
unsigned short var_8 = (unsigned short)17383;
unsigned long long int var_9 = 3112416504527241808ULL;
signed char var_14 = (signed char)-100;
int zero = 0;
long long int var_15 = 7237740804488934277LL;
unsigned int var_16 = 3865900003U;
unsigned int var_17 = 4045419480U;
short var_18 = (short)66;
_Bool arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
