#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3021515342U;
unsigned short var_3 = (unsigned short)59384;
short var_5 = (short)2307;
unsigned long long int var_6 = 5161891642553850670ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1309696462U;
unsigned int var_11 = 129919474U;
long long int var_14 = -8513295431164743896LL;
int zero = 0;
unsigned short var_15 = (unsigned short)10235;
short var_16 = (short)-19486;
unsigned short var_17 = (unsigned short)8463;
unsigned short arr_1 [11] ;
unsigned int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)22044;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1208903315U;
}

void checksum() {
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
