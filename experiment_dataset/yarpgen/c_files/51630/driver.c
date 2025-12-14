#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54069;
unsigned short var_2 = (unsigned short)7323;
unsigned int var_4 = 3155808846U;
unsigned char var_5 = (unsigned char)23;
signed char var_6 = (signed char)-109;
_Bool var_7 = (_Bool)0;
int var_9 = 601862251;
unsigned short var_15 = (unsigned short)57314;
signed char var_16 = (signed char)(-127 - 1);
int zero = 0;
unsigned char var_17 = (unsigned char)7;
unsigned int var_18 = 2441419498U;
signed char var_19 = (signed char)113;
unsigned long long int var_20 = 5390378908975983409ULL;
short var_21 = (short)-16430;
unsigned long long int var_22 = 2340870132767426820ULL;
long long int var_23 = 3829523958868946800LL;
unsigned char var_24 = (unsigned char)40;
unsigned short var_25 = (unsigned short)19446;
int var_26 = 1578453919;
_Bool arr_3 [22] ;
signed char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)35 : (signed char)-5;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
