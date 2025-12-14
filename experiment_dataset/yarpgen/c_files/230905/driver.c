#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11417236278443320390ULL;
int var_3 = 606468114;
int var_4 = 571671824;
unsigned short var_5 = (unsigned short)34529;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_11 = 1795439674;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)933;
unsigned short var_16 = (unsigned short)47440;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)21746;
unsigned int arr_4 [19] [19] [19] [19] ;
signed char arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1055965268U : 626916426U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)104;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
