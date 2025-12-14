#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2333639586725750957LL;
_Bool var_1 = (_Bool)0;
int var_2 = -386177181;
unsigned long long int var_3 = 15899536889415147653ULL;
unsigned int var_4 = 2770335800U;
_Bool var_5 = (_Bool)1;
int var_6 = -1846608171;
unsigned long long int var_8 = 15389208026372925358ULL;
unsigned char var_9 = (unsigned char)110;
unsigned int var_11 = 1506154491U;
int zero = 0;
short var_12 = (short)-10990;
long long int var_13 = 7280220708716543708LL;
short var_14 = (short)17294;
int var_15 = 628712421;
_Bool var_16 = (_Bool)1;
int var_17 = 1238600161;
int var_18 = 1348187220;
int arr_4 [24] [24] ;
long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -1661386720;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -8720391324100801941LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
