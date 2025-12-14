#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1933851833881116915ULL;
unsigned long long int var_5 = 16048270311579280298ULL;
unsigned int var_6 = 398749371U;
int var_8 = 2095575780;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -2043541419;
signed char var_13 = (signed char)92;
int var_14 = -1000477223;
int var_15 = -188288647;
int var_16 = -1007563044;
long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 8546065210039823670LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
