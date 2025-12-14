#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)96;
_Bool var_3 = (_Bool)0;
short var_9 = (short)-30157;
signed char var_10 = (signed char)-74;
int zero = 0;
unsigned long long int var_12 = 18094035374807497103ULL;
long long int var_13 = 3024220001499355308LL;
unsigned long long int var_14 = 14490879053219062730ULL;
unsigned int var_15 = 2435005038U;
short var_16 = (short)-17482;
unsigned int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1756953212U;
}

void checksum() {
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
