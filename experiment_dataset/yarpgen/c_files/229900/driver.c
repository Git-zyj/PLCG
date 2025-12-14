#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2423215276534492830LL;
unsigned int var_9 = 3576657415U;
unsigned long long int var_16 = 17212238555770246174ULL;
unsigned long long int var_18 = 12800399048373986253ULL;
int zero = 0;
signed char var_19 = (signed char)-4;
short var_20 = (short)25271;
long long int var_21 = -4947938336056382143LL;
_Bool var_22 = (_Bool)0;
unsigned int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 4020705529U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
