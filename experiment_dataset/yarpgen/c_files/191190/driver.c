#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4298250425161323889LL;
long long int var_8 = 6686255482495564517LL;
unsigned long long int var_10 = 661603628389431657ULL;
long long int var_12 = -4342632168304196317LL;
unsigned int var_14 = 3192283851U;
int zero = 0;
short var_17 = (short)-22237;
long long int var_18 = 836365330845993632LL;
signed char var_19 = (signed char)-11;
int var_20 = -807704923;
long long int var_21 = -6192747650634023445LL;
_Bool var_22 = (_Bool)0;
short arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-10789;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)38;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
