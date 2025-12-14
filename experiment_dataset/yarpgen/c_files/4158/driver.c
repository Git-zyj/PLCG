#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5013702166939003267LL;
long long int var_1 = -3945627982548234603LL;
unsigned char var_2 = (unsigned char)199;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)3;
unsigned short var_9 = (unsigned short)47498;
long long int var_10 = -7555695457288512647LL;
signed char var_11 = (signed char)-106;
int zero = 0;
unsigned short var_13 = (unsigned short)7150;
long long int var_14 = -2131591369650815363LL;
long long int var_15 = -6597557173469422950LL;
unsigned char var_16 = (unsigned char)236;
_Bool var_17 = (_Bool)1;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -7013574210214612492LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
