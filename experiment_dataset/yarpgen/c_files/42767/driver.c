#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8469453005255273443LL;
long long int var_2 = -973739671177446205LL;
long long int var_4 = 2127808961231712186LL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)64911;
int zero = 0;
unsigned int var_16 = 580597722U;
short var_17 = (short)27997;
unsigned long long int var_18 = 10370554730465518831ULL;
unsigned long long int var_19 = 1415096542752379846ULL;
short var_20 = (short)-22122;
int arr_1 [13] [13] ;
unsigned long long int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1980871684;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 1135464077814749928ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
