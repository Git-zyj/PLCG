#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3183922292U;
short var_2 = (short)1907;
unsigned short var_4 = (unsigned short)36991;
unsigned int var_5 = 779546239U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_8 = 1119312829948602048LL;
unsigned long long int var_9 = 941540386236813482ULL;
int zero = 0;
int var_12 = -858858567;
short var_13 = (short)853;
long long int var_14 = -2094633591558894861LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9138289167398204535ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned short arr_1 [23] [23] ;
unsigned long long int arr_3 [16] ;
long long int arr_4 [16] [16] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)22467;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 566911034854415333ULL : 2320889409618767220ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 4871920957906988150LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)10899;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
