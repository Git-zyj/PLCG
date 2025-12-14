#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22878;
int var_1 = 1787548752;
long long int var_2 = -5743402829444989815LL;
int var_5 = -1118406127;
long long int var_10 = -6757264659327586261LL;
int var_14 = -1989347258;
int zero = 0;
unsigned long long int var_16 = 14313289939089665309ULL;
unsigned int var_17 = 3890322666U;
unsigned int var_18 = 3743712632U;
unsigned short var_19 = (unsigned short)14;
int var_20 = -911793802;
signed char var_21 = (signed char)16;
long long int var_22 = 401909821141808949LL;
_Bool arr_0 [19] ;
long long int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -984949630734595642LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
