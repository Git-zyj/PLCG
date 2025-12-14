#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12815;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-9337;
signed char var_8 = (signed char)117;
signed char var_9 = (signed char)-99;
int zero = 0;
signed char var_12 = (signed char)67;
signed char var_13 = (signed char)116;
short var_14 = (short)16966;
int var_15 = -1990397339;
signed char arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-58 : (signed char)-40;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
