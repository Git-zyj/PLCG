#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45675;
_Bool var_1 = (_Bool)0;
short var_3 = (short)17449;
unsigned int var_4 = 341907917U;
short var_5 = (short)-11291;
short var_7 = (short)17717;
unsigned short var_13 = (unsigned short)23563;
int zero = 0;
short var_18 = (short)-19190;
short var_19 = (short)9424;
short var_20 = (short)4194;
unsigned int var_21 = 1998439251U;
unsigned int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2392245957U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
