#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -549803263;
long long int var_2 = -8406819067456159324LL;
short var_3 = (short)11543;
int var_4 = 1526182902;
unsigned short var_11 = (unsigned short)4187;
signed char var_14 = (signed char)112;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = 2109417621741057019LL;
unsigned char var_18 = (unsigned char)244;
int var_19 = 448653311;
_Bool var_20 = (_Bool)0;
int var_21 = 1042388958;
int var_22 = 1712317013;
unsigned short var_23 = (unsigned short)108;
unsigned char arr_0 [20] ;
unsigned short arr_3 [20] [20] [20] ;
_Bool arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)23798;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
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
