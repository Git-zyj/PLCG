#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)86;
unsigned long long int var_6 = 9390940835280073558ULL;
unsigned long long int var_8 = 5650399789168398518ULL;
unsigned int var_9 = 2467376384U;
unsigned long long int var_10 = 6874809286568192509ULL;
int zero = 0;
long long int var_17 = -4023052252726328315LL;
unsigned char var_18 = (unsigned char)231;
unsigned char var_19 = (unsigned char)22;
long long int var_20 = -3911669019607633418LL;
unsigned long long int var_21 = 4040935804672263785ULL;
long long int var_22 = -136653066947859490LL;
unsigned long long int var_23 = 664866887135196781ULL;
unsigned long long int arr_1 [22] ;
unsigned int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 12835798529103176516ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1210672709U : 1168917848U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
