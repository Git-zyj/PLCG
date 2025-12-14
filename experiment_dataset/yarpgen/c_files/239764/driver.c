#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
int var_3 = 1402227903;
short var_5 = (short)15162;
unsigned long long int var_6 = 10571642466063121720ULL;
long long int var_7 = -3783945388990040329LL;
unsigned short var_8 = (unsigned short)43107;
unsigned long long int var_9 = 1540323306519240880ULL;
unsigned int var_10 = 99494607U;
int var_12 = -210796152;
short var_14 = (short)-13458;
int zero = 0;
unsigned long long int var_17 = 18244113189103238965ULL;
int var_18 = 943873055;
unsigned int var_19 = 66962616U;
unsigned int var_20 = 4243291838U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)225;
signed char var_23 = (signed char)107;
short var_24 = (short)18030;
unsigned long long int arr_0 [12] ;
unsigned short arr_3 [12] [12] ;
unsigned int arr_4 [12] [12] ;
unsigned long long int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 8464718283434483896ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)11352;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 2438863129U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 9251989249918124523ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
