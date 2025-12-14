#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
long long int var_4 = 4963790727524115552LL;
unsigned short var_5 = (unsigned short)1628;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)2871;
long long int var_9 = -6126626533290134254LL;
unsigned short var_12 = (unsigned short)33152;
int zero = 0;
signed char var_14 = (signed char)-97;
long long int var_15 = 1152003590667106493LL;
short var_16 = (short)-29975;
unsigned char var_17 = (unsigned char)187;
short var_18 = (short)1390;
long long int arr_0 [24] ;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -8724172478628559319LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)18981;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
