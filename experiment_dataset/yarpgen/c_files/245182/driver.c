#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46305;
signed char var_1 = (signed char)-57;
_Bool var_2 = (_Bool)0;
long long int var_4 = 3211862118241291046LL;
_Bool var_5 = (_Bool)0;
int var_6 = 1042905824;
unsigned int var_8 = 4080597023U;
unsigned int var_9 = 260172585U;
int zero = 0;
unsigned int var_10 = 1027725488U;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)15195;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)19475;
unsigned short var_15 = (unsigned short)40350;
unsigned short arr_1 [23] [23] ;
long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)35782;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1396733542694869454LL : 1073798703853593554LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
