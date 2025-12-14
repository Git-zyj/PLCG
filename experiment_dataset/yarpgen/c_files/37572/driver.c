#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3123464436294451791ULL;
int var_2 = 1421046768;
_Bool var_4 = (_Bool)0;
int var_6 = -100683691;
unsigned int var_7 = 3067113775U;
unsigned short var_11 = (unsigned short)20115;
unsigned char var_15 = (unsigned char)130;
int zero = 0;
unsigned int var_16 = 3989886608U;
int var_17 = 1992662861;
int var_18 = 790855643;
long long int var_19 = 2788791476420214529LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)153;
int var_22 = -1617387294;
unsigned short arr_1 [19] ;
_Bool arr_10 [19] [19] [19] [19] ;
unsigned short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)62822;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50566 : (unsigned short)32649;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
