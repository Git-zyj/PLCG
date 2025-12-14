#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15874;
short var_2 = (short)-24151;
_Bool var_3 = (_Bool)0;
int var_5 = 65019253;
int var_7 = 1127077468;
short var_9 = (short)-1772;
int zero = 0;
long long int var_11 = 7495335771311793498LL;
unsigned short var_12 = (unsigned short)1832;
long long int var_13 = 6862537920423130794LL;
unsigned short var_14 = (unsigned short)9270;
unsigned short var_15 = (unsigned short)65386;
long long int arr_0 [23] ;
short arr_1 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 5931031102868924850LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21955;
}

void checksum() {
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
