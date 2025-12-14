#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -652566901;
unsigned int var_2 = 683927374U;
unsigned long long int var_7 = 1729155940606925033ULL;
int zero = 0;
signed char var_13 = (signed char)-56;
short var_14 = (short)5575;
int var_15 = -1180058900;
int var_16 = -2021241128;
unsigned int var_17 = 1524881006U;
int var_18 = 1949081268;
short var_19 = (short)-726;
short arr_1 [14] [14] ;
short arr_2 [17] [17] ;
unsigned long long int arr_3 [17] ;
short arr_6 [17] ;
int arr_4 [17] ;
long long int arr_8 [17] ;
unsigned long long int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-28503 : (short)-21645;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)13069;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 9075566973261582973ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)19741 : (short)-31068;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -2007775900;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -6256038428552006072LL : -3944581171940928088LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 14241653042856678214ULL : 3072497605211098377ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
