#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 1723529506U;
unsigned int var_6 = 1592502849U;
unsigned int var_7 = 2852697370U;
unsigned int var_9 = 4022532165U;
unsigned short var_13 = (unsigned short)33947;
unsigned char var_19 = (unsigned char)196;
int zero = 0;
unsigned short var_20 = (unsigned short)37484;
long long int var_21 = 5940788663914364989LL;
unsigned short var_22 = (unsigned short)41124;
short var_23 = (short)7143;
unsigned long long int var_24 = 15181875382325993262ULL;
_Bool var_25 = (_Bool)0;
unsigned int arr_2 [15] ;
short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 104389703U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5769 : (short)-20075;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
