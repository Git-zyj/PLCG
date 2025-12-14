#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
int var_8 = 1345792618;
unsigned short var_9 = (unsigned short)22060;
long long int var_14 = -7813756626382211812LL;
unsigned int var_15 = 2255426917U;
int zero = 0;
unsigned int var_19 = 3847051650U;
long long int var_20 = -4796851933336499590LL;
signed char var_21 = (signed char)7;
unsigned int var_22 = 180718182U;
int var_23 = 475748537;
int var_24 = -416417380;
unsigned char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)4;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
