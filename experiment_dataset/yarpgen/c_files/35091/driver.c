#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 15519549679090784798ULL;
long long int var_11 = -8785807290819731478LL;
int zero = 0;
int var_12 = 1847878201;
unsigned short var_13 = (unsigned short)4132;
long long int var_14 = -7501052435073465296LL;
signed char var_15 = (signed char)57;
signed char var_16 = (signed char)-97;
signed char var_17 = (signed char)58;
short var_18 = (short)-9529;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)92;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
