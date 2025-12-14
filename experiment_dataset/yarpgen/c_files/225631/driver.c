#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
int var_1 = 859275706;
long long int var_2 = 4505159609428592180LL;
unsigned int var_7 = 3573176229U;
short var_12 = (short)-2649;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 8963166316174433612ULL;
short var_19 = (short)10227;
long long int var_20 = 8569226840883375926LL;
unsigned long long int arr_2 [22] ;
int arr_4 [22] ;
long long int arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 14044915484949408625ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1403884590;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1866982169423116639LL : -2623516786963124575LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
