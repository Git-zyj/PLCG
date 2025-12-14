#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19357;
unsigned short var_9 = (unsigned short)37591;
signed char var_10 = (signed char)-49;
unsigned short var_11 = (unsigned short)33029;
unsigned int var_13 = 4175902638U;
signed char var_14 = (signed char)49;
int zero = 0;
signed char var_15 = (signed char)106;
signed char var_16 = (signed char)-76;
unsigned short var_17 = (unsigned short)36655;
unsigned long long int var_18 = 9524165721073572358ULL;
unsigned int var_19 = 4228137157U;
long long int var_20 = -8687518290783136416LL;
unsigned short var_21 = (unsigned short)10473;
signed char var_22 = (signed char)-77;
unsigned int var_23 = 1060909420U;
int var_24 = 1097894523;
int var_25 = -2043322447;
long long int var_26 = 7578032072001897099LL;
unsigned long long int var_27 = 18072405322331888003ULL;
unsigned char var_28 = (unsigned char)46;
short var_29 = (short)25650;
unsigned long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_3 [21] ;
unsigned int arr_20 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3892213048074362717ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)62210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 14693969407525371743ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1805680189350250843ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)21241;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 1888047445U : 1970672283U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
