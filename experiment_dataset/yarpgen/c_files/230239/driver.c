#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 709857922;
short var_2 = (short)-18721;
short var_5 = (short)-18515;
unsigned long long int var_7 = 5672149941229464137ULL;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int var_15 = -759541175;
int zero = 0;
short var_16 = (short)-2691;
short var_17 = (short)10418;
short var_18 = (short)12430;
_Bool var_19 = (_Bool)1;
int var_20 = 1499854254;
unsigned char var_21 = (unsigned char)9;
_Bool var_22 = (_Bool)0;
short var_23 = (short)18186;
short var_24 = (short)1688;
unsigned int var_25 = 1646457960U;
short arr_1 [23] ;
int arr_2 [23] ;
int arr_3 [19] ;
unsigned long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-10002;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1095306307 : 1539113234;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1697726686;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 11776311806241585903ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
