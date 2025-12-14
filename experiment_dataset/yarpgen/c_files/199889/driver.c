#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17601491122661404016ULL;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_6 = -8967940130643186623LL;
int var_7 = -280109545;
long long int var_8 = 6455037308388771213LL;
int var_10 = -914254660;
unsigned int var_16 = 2792441355U;
int zero = 0;
signed char var_20 = (signed char)-66;
unsigned long long int var_21 = 4656041080274253175ULL;
unsigned long long int var_22 = 82184618618601454ULL;
unsigned short var_23 = (unsigned short)45955;
int var_24 = -1155655768;
signed char var_25 = (signed char)112;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 5321640152041069507LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
