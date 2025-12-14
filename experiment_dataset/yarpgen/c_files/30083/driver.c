#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 942300351244188357ULL;
signed char var_1 = (signed char)-75;
short var_5 = (short)-30203;
long long int var_10 = 4438940850418306118LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 293248449U;
signed char var_13 = (signed char)52;
short var_14 = (short)-30110;
unsigned long long int var_15 = 4863647586581801327ULL;
unsigned long long int var_17 = 4623405193955701229ULL;
int zero = 0;
short var_18 = (short)-22952;
unsigned int var_19 = 581509281U;
unsigned short var_20 = (unsigned short)6468;
short var_21 = (short)22889;
signed char arr_0 [24] ;
signed char arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-124;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
