#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 260374913801017257LL;
_Bool var_4 = (_Bool)0;
int var_6 = 2104833774;
int zero = 0;
unsigned short var_14 = (unsigned short)39629;
unsigned int var_15 = 2309780816U;
short var_16 = (short)-31296;
unsigned long long int var_17 = 15264990870089656401ULL;
short var_18 = (short)-17603;
unsigned long long int var_19 = 5566776134296071159ULL;
unsigned long long int var_20 = 8048080925462808846ULL;
int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1312197121;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
