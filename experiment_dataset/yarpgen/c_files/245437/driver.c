#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8588081086025949447LL;
int var_5 = -2119204753;
unsigned long long int var_7 = 4215086459385040741ULL;
unsigned short var_8 = (unsigned short)7475;
_Bool var_10 = (_Bool)0;
long long int var_11 = 4888110994033494231LL;
unsigned short var_13 = (unsigned short)58468;
signed char var_17 = (signed char)-80;
int zero = 0;
unsigned long long int var_20 = 10329861224727138531ULL;
short var_21 = (short)4203;
unsigned short var_22 = (unsigned short)33510;
_Bool var_23 = (_Bool)1;
long long int var_24 = 1542398500341152869LL;
unsigned int var_25 = 1063713525U;
_Bool var_26 = (_Bool)1;
int var_27 = 637348567;
short arr_2 [11] ;
unsigned short arr_3 [11] [11] ;
long long int arr_4 [11] [11] ;
long long int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-10615;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35792 : (unsigned short)18183;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = -4009446576399118279LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2854537920824625298LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
