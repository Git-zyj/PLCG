#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9332;
unsigned long long int var_6 = 17810262822989427398ULL;
long long int var_8 = -8464473288676145065LL;
long long int var_9 = 2783547428835047020LL;
signed char var_10 = (signed char)-63;
unsigned char var_13 = (unsigned char)42;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = -8156965225961911241LL;
long long int var_17 = -6550552248663601165LL;
short var_18 = (short)-24440;
short var_19 = (short)21770;
long long int var_20 = 2719443156374857345LL;
int arr_0 [21] ;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -911987910;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)3638;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
