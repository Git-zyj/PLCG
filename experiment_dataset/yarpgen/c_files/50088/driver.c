#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3432788338U;
short var_1 = (short)-20297;
unsigned int var_2 = 102337232U;
unsigned char var_3 = (unsigned char)226;
short var_4 = (short)-957;
unsigned int var_5 = 3099333943U;
short var_6 = (short)-11481;
unsigned char var_7 = (unsigned char)161;
unsigned int var_8 = 3036601534U;
unsigned int var_9 = 4111601960U;
unsigned char var_10 = (unsigned char)195;
unsigned long long int var_11 = 1616658338174235265ULL;
unsigned int var_12 = 2369044184U;
unsigned char var_13 = (unsigned char)34;
unsigned long long int var_14 = 4553548682732845056ULL;
short var_16 = (short)-30549;
unsigned char var_17 = (unsigned char)51;
unsigned char var_18 = (unsigned char)115;
short var_19 = (short)31780;
int zero = 0;
unsigned int var_20 = 691534360U;
short var_21 = (short)-15868;
short var_22 = (short)-16281;
unsigned int var_23 = 1755710310U;
unsigned int var_24 = 163156133U;
unsigned long long int var_25 = 11992999051863654417ULL;
unsigned char var_26 = (unsigned char)177;
unsigned int var_27 = 3545630700U;
unsigned int var_28 = 3014653939U;
short var_29 = (short)18322;
unsigned int var_30 = 1324693041U;
unsigned int var_31 = 4045077773U;
unsigned int var_32 = 3057469301U;
unsigned int var_33 = 2583018218U;
unsigned char var_34 = (unsigned char)62;
unsigned int arr_13 [25] ;
short arr_21 [10] [10] ;
unsigned int arr_22 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 443479252U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (short)24545;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_22 [i_0] [i_1] = 3015622110U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
