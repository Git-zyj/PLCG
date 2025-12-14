#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37360;
short var_1 = (short)2847;
long long int var_4 = 2462916792643818313LL;
unsigned long long int var_6 = 15619246541032429043ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)60;
unsigned long long int var_12 = 14154960975054379087ULL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 362634638915263818LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -7420725778286190035LL;
unsigned int arr_0 [10] ;
unsigned short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2491069790U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)21944;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
