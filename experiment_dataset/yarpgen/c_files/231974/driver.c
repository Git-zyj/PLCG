#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -274828788;
unsigned short var_6 = (unsigned short)57690;
signed char var_8 = (signed char)-19;
int zero = 0;
long long int var_15 = 8530852093059112018LL;
unsigned int var_16 = 690831474U;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)70;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)26;
_Bool arr_0 [11] ;
short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-25160;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
