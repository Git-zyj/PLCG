#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 511426367888342506ULL;
unsigned char var_1 = (unsigned char)97;
long long int var_2 = -2637747712939103071LL;
signed char var_3 = (signed char)-53;
unsigned int var_4 = 1322333752U;
unsigned long long int var_5 = 9885828191321757584ULL;
unsigned long long int var_6 = 4708104789707964456ULL;
unsigned long long int var_7 = 6253320800425873605ULL;
short var_8 = (short)-19419;
unsigned short var_9 = (unsigned short)64746;
int zero = 0;
unsigned short var_10 = (unsigned short)64131;
unsigned long long int var_11 = 9387163509546695202ULL;
unsigned int var_12 = 2093989662U;
short var_13 = (short)24487;
unsigned long long int var_14 = 7770133272523119650ULL;
unsigned long long int var_15 = 6962785894974493707ULL;
unsigned int var_16 = 3784965690U;
unsigned int var_17 = 3929221123U;
short var_18 = (short)-23763;
long long int arr_16 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_17 [24] ;
int arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -4686421910091995837LL : -2894026995700200339LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 2458021253U : 4052859073U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? -1451231063 : -727834511;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
