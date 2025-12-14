#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -912635652453637409LL;
int var_1 = 558612621;
unsigned short var_5 = (unsigned short)58688;
unsigned short var_6 = (unsigned short)10386;
short var_7 = (short)1242;
unsigned int var_8 = 3494059328U;
short var_9 = (short)-29112;
int var_11 = 2076178963;
int zero = 0;
unsigned char var_12 = (unsigned char)30;
long long int var_13 = 4274852277170880493LL;
unsigned short var_14 = (unsigned short)7483;
unsigned long long int var_15 = 5648477689849548156ULL;
signed char var_16 = (signed char)-41;
unsigned short arr_0 [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)44480;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1612019437U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
