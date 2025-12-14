#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27788;
unsigned long long int var_2 = 16961947803675274082ULL;
unsigned int var_6 = 1202483769U;
short var_7 = (short)1783;
unsigned short var_10 = (unsigned short)11659;
long long int var_18 = 5787165557043206194LL;
int zero = 0;
unsigned short var_20 = (unsigned short)45184;
unsigned long long int var_21 = 13193899551044960235ULL;
unsigned long long int var_22 = 14667550514308786121ULL;
unsigned long long int arr_1 [25] [25] ;
_Bool arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 12008144187027675002ULL : 476185072898099214ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
