#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64997;
unsigned long long int var_2 = 10464919914454555507ULL;
short var_3 = (short)21735;
unsigned int var_4 = 4113820519U;
long long int var_5 = -4076150855243159363LL;
unsigned long long int var_7 = 2766274626198050582ULL;
unsigned short var_9 = (unsigned short)45320;
unsigned int var_10 = 1581939957U;
int zero = 0;
unsigned int var_11 = 1472097248U;
unsigned short var_12 = (unsigned short)22;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)33415;
signed char var_15 = (signed char)97;
short arr_1 [17] ;
unsigned short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)25782 : (short)-26601;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52544 : (unsigned short)63672;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
