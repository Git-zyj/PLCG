#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8720129381029650820ULL;
unsigned int var_1 = 4201908893U;
unsigned int var_2 = 946809368U;
unsigned long long int var_3 = 36661663583473305ULL;
unsigned long long int var_4 = 16666843582723882476ULL;
short var_5 = (short)-8123;
short var_6 = (short)26979;
unsigned long long int var_7 = 17302024017216174869ULL;
unsigned long long int var_8 = 15302797858952612661ULL;
unsigned int var_9 = 1521895693U;
unsigned int var_10 = 4250859436U;
short var_11 = (short)-1755;
unsigned int var_12 = 1109942687U;
int zero = 0;
unsigned long long int var_13 = 16420201674626712914ULL;
unsigned long long int var_14 = 3471010788129620366ULL;
unsigned long long int var_15 = 13056730969772599787ULL;
unsigned int var_16 = 2388861124U;
unsigned int var_17 = 2404546409U;
unsigned int var_18 = 2434923552U;
unsigned long long int var_19 = 4929796654759671387ULL;
unsigned long long int var_20 = 4618174416446499078ULL;
unsigned long long int arr_15 [24] [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 6617707739799226435ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
