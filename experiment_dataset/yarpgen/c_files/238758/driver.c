#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 72489318;
unsigned char var_2 = (unsigned char)64;
unsigned char var_3 = (unsigned char)177;
long long int var_4 = 8712782470542035394LL;
int var_6 = 437468033;
unsigned int var_7 = 4099714322U;
unsigned short var_8 = (unsigned short)24071;
long long int var_9 = -7359671457218774687LL;
int zero = 0;
unsigned short var_10 = (unsigned short)54489;
short var_11 = (short)15746;
short var_12 = (short)-14757;
unsigned long long int var_13 = 680707710315132630ULL;
_Bool var_14 = (_Bool)1;
short arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-25564 : (short)670;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
