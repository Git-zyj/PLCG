#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-41;
int var_5 = 1276990083;
unsigned int var_8 = 2387144268U;
int zero = 0;
unsigned long long int var_11 = 6994532908612354708ULL;
unsigned short var_12 = (unsigned short)19469;
_Bool var_13 = (_Bool)1;
int var_14 = 571995819;
unsigned long long int var_15 = 1344015480027079488ULL;
int var_16 = 1164165560;
long long int var_17 = -3399288165811167188LL;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)16347;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
