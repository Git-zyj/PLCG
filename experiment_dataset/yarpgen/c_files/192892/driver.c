#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)71;
signed char var_15 = (signed char)95;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 3169927387U;
long long int var_21 = 7166003698503963456LL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)64;
signed char arr_0 [18] ;
int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 451438392;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
