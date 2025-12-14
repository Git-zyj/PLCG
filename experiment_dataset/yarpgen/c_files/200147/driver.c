#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17435255147967320709ULL;
unsigned int var_8 = 2733262938U;
unsigned long long int var_9 = 11646158562962479478ULL;
unsigned char var_15 = (unsigned char)132;
int zero = 0;
short var_16 = (short)-7068;
long long int var_17 = -8054231200846229636LL;
unsigned long long int var_18 = 17323572156142590522ULL;
unsigned int var_19 = 246616918U;
unsigned int arr_2 [10] ;
long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2612607674U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3830766924796711269LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
