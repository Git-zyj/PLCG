#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned char var_1 = (unsigned char)251;
short var_2 = (short)-17847;
unsigned char var_4 = (unsigned char)86;
long long int var_6 = 355317732021153832LL;
int var_9 = 524680787;
int zero = 0;
long long int var_11 = -1645323100413630289LL;
long long int var_12 = -3823395319943137629LL;
long long int var_13 = 1784401215271292129LL;
long long int var_14 = -4237356031145711347LL;
long long int var_15 = -4563025076331163686LL;
short var_16 = (short)-13432;
long long int var_17 = -6836181994118730051LL;
unsigned int arr_0 [20] ;
unsigned short arr_2 [20] ;
unsigned int arr_5 [20] ;
unsigned int arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1342002837U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)16838;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2986748884U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 3639865044U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
