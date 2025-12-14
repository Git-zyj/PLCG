#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4160931952U;
unsigned long long int var_5 = 7618670607952191704ULL;
unsigned short var_7 = (unsigned short)59998;
unsigned long long int var_9 = 6177438538446176471ULL;
int zero = 0;
unsigned long long int var_13 = 10942409538166311791ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3009895389946147243ULL;
unsigned short var_16 = (unsigned short)56228;
short var_17 = (short)22706;
unsigned int var_18 = 3796701630U;
int var_19 = 590228181;
unsigned short arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)58032;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
