#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-93;
unsigned long long int var_7 = 2078785576369666399ULL;
long long int var_10 = -6568486190491762267LL;
unsigned short var_14 = (unsigned short)22763;
int zero = 0;
short var_18 = (short)-22118;
int var_19 = -1480572005;
long long int var_20 = 744601604253853597LL;
long long int var_21 = -4833276640189031705LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)64872;
long long int arr_0 [11] [11] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2558621852855865177LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)26871;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
