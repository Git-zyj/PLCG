#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5211585848051964032ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 1472734154;
signed char var_4 = (signed char)56;
unsigned int var_5 = 1816706380U;
int var_6 = 894287581;
unsigned short var_7 = (unsigned short)52834;
unsigned int var_8 = 2989674988U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-380;
int zero = 0;
unsigned int var_14 = 3669438567U;
long long int var_15 = -5900138759589694936LL;
int var_16 = -1466342371;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1907135442;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
