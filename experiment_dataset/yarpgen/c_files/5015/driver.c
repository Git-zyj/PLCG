#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 223689434;
int var_14 = -1666555202;
signed char var_15 = (signed char)-34;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int var_19 = 921780426;
unsigned short var_20 = (unsigned short)42840;
int arr_0 [19] ;
unsigned short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1552855267 : -40757168;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)31656;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
