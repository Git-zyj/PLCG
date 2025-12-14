#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-73;
unsigned long long int var_4 = 2630878118537540423ULL;
unsigned long long int var_5 = 13850447231033312570ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = -1418312498;
int var_10 = 1269078817;
unsigned int var_12 = 52890483U;
unsigned int var_13 = 1349109634U;
int zero = 0;
unsigned long long int var_14 = 11950402333055418111ULL;
unsigned char var_15 = (unsigned char)59;
unsigned int var_16 = 1437823209U;
unsigned long long int var_17 = 13864743853061324332ULL;
unsigned char var_18 = (unsigned char)125;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)747;
_Bool var_21 = (_Bool)1;
long long int arr_4 [10] ;
unsigned char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 5733421693248896795LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)106;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
