#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 618937207741379844ULL;
int var_2 = -1269336632;
unsigned short var_3 = (unsigned short)52075;
long long int var_4 = -6116345754820159688LL;
unsigned short var_6 = (unsigned short)63765;
signed char var_7 = (signed char)-86;
_Bool var_8 = (_Bool)1;
long long int var_9 = 1802301666017712951LL;
int zero = 0;
short var_10 = (short)-11403;
unsigned int var_11 = 1940529556U;
unsigned int var_12 = 3568532629U;
long long int var_13 = -2988960462503475725LL;
short var_14 = (short)-22638;
unsigned int var_15 = 3065150199U;
unsigned int arr_0 [10] ;
long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3037034685U : 2211088139U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 5619857493088522624LL : 1742746434900950442LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
