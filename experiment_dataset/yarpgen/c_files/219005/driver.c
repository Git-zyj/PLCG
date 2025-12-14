#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7055557319540828850ULL;
unsigned int var_3 = 3045481524U;
unsigned long long int var_5 = 10372297823245236891ULL;
unsigned int var_9 = 3070922318U;
unsigned long long int var_10 = 1292435184960836059ULL;
int zero = 0;
unsigned long long int var_11 = 11663851088665414346ULL;
unsigned long long int var_12 = 2337197589659688755ULL;
unsigned long long int var_13 = 14385479739518136412ULL;
unsigned long long int var_14 = 7907765727683267205ULL;
unsigned long long int var_15 = 7708600552474652876ULL;
unsigned int var_16 = 1797346502U;
unsigned int var_17 = 419648282U;
unsigned int var_18 = 1807152051U;
unsigned int var_19 = 1665538934U;
unsigned int arr_0 [17] ;
unsigned int arr_2 [23] ;
unsigned int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4232957078U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1760783824U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3559524714U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
