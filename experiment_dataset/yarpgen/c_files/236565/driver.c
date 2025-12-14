#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20134;
unsigned int var_1 = 3907126322U;
int var_2 = -96793962;
int var_3 = -436180393;
long long int var_4 = -2506824460268523375LL;
unsigned long long int var_7 = 8863081631413236635ULL;
int zero = 0;
long long int var_14 = -2382781139210771023LL;
unsigned short var_15 = (unsigned short)44581;
short var_16 = (short)-21936;
signed char var_17 = (signed char)9;
short var_18 = (short)-23777;
long long int var_19 = -8546618420983835081LL;
int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -65639921;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
