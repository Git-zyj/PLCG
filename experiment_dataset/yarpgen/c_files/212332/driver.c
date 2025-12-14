#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)19618;
signed char var_9 = (signed char)-91;
short var_13 = (short)-15145;
signed char var_14 = (signed char)-101;
int zero = 0;
int var_16 = 2109434861;
unsigned long long int var_17 = 17128187401908615407ULL;
unsigned long long int var_18 = 15606611867254241348ULL;
short var_19 = (short)27152;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-2707;
int arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned long long int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 160701849;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 15400760467305442603ULL : 10469047130947840978ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
