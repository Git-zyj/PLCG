#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
signed char var_1 = (signed char)-106;
unsigned short var_4 = (unsigned short)30935;
unsigned long long int var_5 = 11820705260880405750ULL;
unsigned long long int var_6 = 8947776379971297387ULL;
unsigned long long int var_7 = 2560690680701604717ULL;
signed char var_8 = (signed char)-22;
short var_9 = (short)-22594;
short var_11 = (short)-2728;
short var_13 = (short)10859;
unsigned short var_15 = (unsigned short)56252;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-16301;
signed char var_18 = (signed char)-27;
int zero = 0;
unsigned int var_19 = 751775905U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)38512;
unsigned long long int var_22 = 1090678545259048259ULL;
unsigned int var_23 = 2405044035U;
unsigned int var_24 = 3396839040U;
unsigned long long int var_25 = 1560915219842689797ULL;
short var_26 = (short)2556;
unsigned short var_27 = (unsigned short)14390;
unsigned short arr_0 [18] ;
short arr_6 [18] [18] [18] [18] ;
unsigned long long int arr_11 [18] [18] ;
short arr_13 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)44544;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-28068;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 18118381885090742528ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-16667;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
