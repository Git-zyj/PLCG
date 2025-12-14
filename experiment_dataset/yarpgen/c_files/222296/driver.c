#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -974212890;
unsigned long long int var_1 = 14579251071148839679ULL;
long long int var_4 = -4378506238675291544LL;
unsigned short var_6 = (unsigned short)61520;
signed char var_8 = (signed char)61;
signed char var_9 = (signed char)(-127 - 1);
signed char var_10 = (signed char)-25;
short var_11 = (short)-1044;
int zero = 0;
int var_13 = 768382569;
int var_14 = -1276653449;
short var_15 = (short)9161;
_Bool var_16 = (_Bool)1;
unsigned int arr_2 [24] [24] [24] ;
long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 372238633U : 1925937982U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7569857648393473130LL : -3495889896979505111LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
