#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)2;
unsigned short var_3 = (unsigned short)27872;
int var_5 = -428305402;
long long int var_8 = 2466421001439721009LL;
unsigned short var_9 = (unsigned short)54807;
unsigned int var_10 = 2617739997U;
int zero = 0;
unsigned short var_11 = (unsigned short)27275;
unsigned int var_12 = 2412308831U;
short var_13 = (short)383;
long long int var_14 = 4727445293331608301LL;
unsigned int var_15 = 3593378961U;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7772439233461149791LL;
unsigned short arr_0 [19] ;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)42763;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7567869573009575047LL : 6641745241952182485LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
