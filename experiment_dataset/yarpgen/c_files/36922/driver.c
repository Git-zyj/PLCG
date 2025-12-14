#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10232053415767259764ULL;
short var_2 = (short)19134;
long long int var_12 = 3394088932319616784LL;
int zero = 0;
long long int var_19 = -3032001524810522593LL;
unsigned int var_20 = 3166814872U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2282546903U;
unsigned int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1999166032U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
