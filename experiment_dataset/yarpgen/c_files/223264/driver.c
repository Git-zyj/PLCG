#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
long long int var_2 = 5388774965719015080LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 15848680032823844853ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -1178807200978485543LL;
signed char var_8 = (signed char)-10;
short var_12 = (short)-10028;
short var_15 = (short)-30934;
unsigned int var_16 = 628687054U;
int zero = 0;
int var_19 = 934761973;
unsigned int var_20 = 497144974U;
unsigned long long int var_21 = 6464131743824233231ULL;
unsigned int var_22 = 4276241378U;
signed char var_23 = (signed char)66;
unsigned int var_24 = 240887012U;
signed char var_25 = (signed char)-126;
short arr_0 [10] [10] ;
signed char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-18271;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)120;
}

void checksum() {
    hash(&seed, var_19);
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
