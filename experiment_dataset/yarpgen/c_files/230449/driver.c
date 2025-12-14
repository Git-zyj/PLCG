#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)164;
short var_2 = (short)10885;
unsigned int var_11 = 2275758759U;
long long int var_12 = -7126870932307539389LL;
long long int var_13 = 2429982175631781452LL;
int zero = 0;
unsigned short var_14 = (unsigned short)21655;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)71;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2552725156U;
long long int var_20 = -8299848586537385819LL;
unsigned long long int arr_1 [12] ;
unsigned int arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7008398741919778252ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 2609222112U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
