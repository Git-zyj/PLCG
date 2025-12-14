#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
int var_3 = -417190191;
signed char var_8 = (signed char)37;
short var_9 = (short)-30743;
long long int var_11 = 5668546212187343961LL;
short var_12 = (short)23550;
int zero = 0;
short var_13 = (short)-2407;
short var_14 = (short)4688;
signed char var_15 = (signed char)-12;
int var_16 = 277986317;
signed char var_17 = (signed char)97;
signed char var_18 = (signed char)-85;
_Bool var_19 = (_Bool)1;
int var_20 = 1226096773;
signed char arr_0 [12] ;
_Bool arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
