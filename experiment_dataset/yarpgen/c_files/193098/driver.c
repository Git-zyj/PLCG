#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 575465526U;
unsigned long long int var_2 = 7893241497431588650ULL;
unsigned short var_3 = (unsigned short)51907;
unsigned long long int var_4 = 12737867975399419851ULL;
unsigned short var_6 = (unsigned short)48698;
int var_9 = -784252637;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)29493;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4074565808U;
signed char var_23 = (signed char)-68;
unsigned int var_24 = 4080256971U;
int var_25 = -568868213;
unsigned short arr_0 [14] ;
unsigned short arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)50677;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)48940;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
