#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -103150062232059591LL;
unsigned short var_3 = (unsigned short)25403;
unsigned int var_4 = 1627963173U;
unsigned int var_5 = 829707928U;
unsigned int var_6 = 746807285U;
long long int var_7 = 4859524347629696372LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4489425133906673602LL;
unsigned int var_11 = 160137643U;
long long int var_12 = 7460160115798244373LL;
unsigned char var_13 = (unsigned char)43;
long long int var_16 = -7823437849051947916LL;
long long int var_18 = -1434593232307220325LL;
int zero = 0;
unsigned short var_20 = (unsigned short)54754;
unsigned int var_21 = 1267666944U;
signed char var_22 = (signed char)-7;
short var_23 = (short)-21811;
_Bool var_24 = (_Bool)0;
unsigned int arr_1 [16] ;
short arr_2 [16] ;
unsigned char arr_5 [16] ;
long long int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1530522363U : 3501324982U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)26013;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1628040884830196620LL : -4068802371950767392LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
