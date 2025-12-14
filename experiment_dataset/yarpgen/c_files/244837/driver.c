#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_10 = 990407256;
unsigned int var_12 = 2490353057U;
int var_15 = 298767567;
long long int var_16 = 3889671870190320345LL;
int var_17 = 1333226939;
long long int var_19 = -2278551683352003503LL;
int zero = 0;
long long int var_20 = 1149935631129226253LL;
unsigned short var_21 = (unsigned short)10282;
unsigned long long int var_22 = 2241560352290046864ULL;
unsigned long long int var_23 = 11108378923071188587ULL;
long long int var_24 = 6949616776250012735LL;
signed char var_25 = (signed char)112;
unsigned char var_26 = (unsigned char)75;
long long int var_27 = -7996507531633852494LL;
unsigned char arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)183;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
