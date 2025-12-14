#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41792;
unsigned int var_1 = 684918782U;
long long int var_2 = 7608513354370654606LL;
signed char var_3 = (signed char)-54;
unsigned long long int var_10 = 17368188415016560760ULL;
short var_14 = (short)30543;
int var_15 = -1578625598;
unsigned long long int var_18 = 11308190962682551483ULL;
int zero = 0;
unsigned long long int var_20 = 7064181411537656956ULL;
short var_21 = (short)9503;
signed char var_22 = (signed char)123;
signed char var_23 = (signed char)-72;
_Bool arr_0 [20] [20] ;
short arr_1 [20] ;
int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)4414;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1523137581;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
