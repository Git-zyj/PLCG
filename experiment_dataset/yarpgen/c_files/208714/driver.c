#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1428896407U;
unsigned int var_3 = 2501417137U;
int var_4 = -1525628664;
unsigned long long int var_5 = 7716028991220494752ULL;
unsigned char var_7 = (unsigned char)249;
unsigned long long int var_8 = 11459959191959358267ULL;
int var_13 = 1170143820;
unsigned int var_16 = 1041272397U;
int zero = 0;
unsigned int var_17 = 3348541106U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)65058;
unsigned long long int var_20 = 8252630841329075667ULL;
int var_21 = -1142021985;
int arr_3 [19] ;
unsigned long long int arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1824765370;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11091342807852879972ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
