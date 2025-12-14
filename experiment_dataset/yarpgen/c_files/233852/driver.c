#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
short var_1 = (short)27030;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)204;
unsigned short var_9 = (unsigned short)60157;
unsigned short var_10 = (unsigned short)10044;
short var_11 = (short)-5706;
unsigned int var_14 = 4212638049U;
unsigned int var_16 = 3620397314U;
int zero = 0;
unsigned int var_18 = 3832099075U;
long long int var_19 = -8964133742330299134LL;
unsigned char var_20 = (unsigned char)58;
unsigned char var_21 = (unsigned char)123;
unsigned int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 2637717370U : 1834430392U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
