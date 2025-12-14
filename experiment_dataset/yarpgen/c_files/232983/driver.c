#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 182203176375068418ULL;
unsigned short var_5 = (unsigned short)33679;
signed char var_7 = (signed char)-56;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 807020363;
long long int var_15 = -868550648398019943LL;
unsigned int var_16 = 140919552U;
long long int var_17 = 5250721172520957095LL;
int var_18 = -968530511;
int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -628176001;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
