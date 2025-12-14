#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9002;
unsigned char var_1 = (unsigned char)28;
unsigned int var_2 = 1589859145U;
long long int var_4 = -7729254477408717411LL;
unsigned int var_5 = 680022099U;
int var_8 = 2004449268;
unsigned short var_16 = (unsigned short)19973;
int zero = 0;
long long int var_18 = -5388119704391742731LL;
unsigned int var_19 = 1669675269U;
unsigned short var_20 = (unsigned short)52896;
unsigned char var_21 = (unsigned char)244;
int var_22 = 838881282;
short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-10234;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
