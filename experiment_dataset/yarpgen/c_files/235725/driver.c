#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 570440079269064906ULL;
int var_3 = -8157459;
unsigned short var_4 = (unsigned short)46201;
long long int var_5 = 2856978142034579813LL;
long long int var_6 = 1151680504081451566LL;
unsigned long long int var_11 = 13915815603465250368ULL;
unsigned int var_12 = 2453457152U;
short var_13 = (short)-27704;
unsigned long long int var_14 = 6555946209814743429ULL;
short var_15 = (short)-31747;
long long int var_17 = 1434713748578945751LL;
unsigned long long int var_18 = 2248664065196872206ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)46278;
signed char var_21 = (signed char)-18;
int var_22 = -1633815560;
long long int var_23 = -8991004344661329943LL;
unsigned long long int arr_3 [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12586365997729465652ULL : 17962102794759036831ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2873176134391253397ULL : 5447339949765807035ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4080510444746699354ULL;
}

void checksum() {
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
