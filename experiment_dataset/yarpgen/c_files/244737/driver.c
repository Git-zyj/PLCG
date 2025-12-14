#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 9078348974704980160ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)17225;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)63;
signed char var_15 = (signed char)-105;
signed char var_16 = (signed char)-37;
unsigned long long int var_17 = 10565914958322381249ULL;
long long int arr_0 [24] ;
_Bool arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -8544033748145743705LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
