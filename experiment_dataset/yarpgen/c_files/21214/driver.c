#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8315496563186170620LL;
long long int var_3 = 4282262076432187663LL;
long long int var_4 = -705187953083497974LL;
long long int var_5 = 3713498059552374093LL;
unsigned char var_7 = (unsigned char)1;
unsigned long long int var_8 = 18375345572277977094ULL;
int zero = 0;
unsigned int var_10 = 162800958U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1561301015U;
short var_13 = (short)30420;
short var_14 = (short)11280;
unsigned char arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)59 : (unsigned char)72;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
