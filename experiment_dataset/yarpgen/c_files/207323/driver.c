#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 864538588U;
unsigned short var_6 = (unsigned short)23341;
unsigned char var_7 = (unsigned char)147;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 12231667888432841629ULL;
signed char var_14 = (signed char)-113;
int zero = 0;
signed char var_15 = (signed char)-33;
long long int var_16 = -5826121004531048555LL;
unsigned long long int var_17 = 17949412839540196873ULL;
unsigned long long int var_18 = 9160800106236599023ULL;
long long int var_19 = 4959039645071740051LL;
int var_20 = -1344941050;
unsigned int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2228664628U;
}

void checksum() {
    hash(&seed, var_15);
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
