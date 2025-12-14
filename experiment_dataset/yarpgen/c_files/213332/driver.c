#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43524;
unsigned int var_4 = 3592631579U;
short var_5 = (short)14269;
short var_7 = (short)29804;
unsigned long long int var_11 = 15573665282673358196ULL;
short var_12 = (short)-7547;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-93;
unsigned int var_17 = 2074079054U;
unsigned long long int var_18 = 5474967125953847435ULL;
long long int var_19 = 3179096563829753256LL;
short var_20 = (short)-6754;
signed char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)94;
}

void checksum() {
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
