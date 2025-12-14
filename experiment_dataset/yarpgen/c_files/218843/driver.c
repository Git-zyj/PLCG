#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)27;
_Bool var_9 = (_Bool)1;
unsigned long long int var_16 = 14888497239370445283ULL;
unsigned int var_17 = 317693264U;
int zero = 0;
signed char var_20 = (signed char)103;
int var_21 = 542063982;
short var_22 = (short)-31024;
long long int var_23 = -6605366884429268038LL;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8861337660708625961ULL : 13890775988014438211ULL;
}

void checksum() {
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
