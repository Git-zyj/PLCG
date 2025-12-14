#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 948265495700031216LL;
unsigned short var_7 = (unsigned short)31717;
unsigned short var_8 = (unsigned short)1550;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)127;
unsigned short var_14 = (unsigned short)47576;
int zero = 0;
signed char var_15 = (signed char)36;
unsigned int var_16 = 2104564092U;
long long int var_17 = -7615412585716505808LL;
unsigned short var_18 = (unsigned short)64623;
unsigned int arr_0 [25] ;
int arr_1 [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 422295268U : 1483132477U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1109411655 : -885627562;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2200008500236880936LL : 7673293531679477517LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
