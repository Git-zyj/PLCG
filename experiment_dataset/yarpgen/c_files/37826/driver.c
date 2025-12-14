#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-44;
unsigned int var_3 = 1692816307U;
unsigned short var_4 = (unsigned short)15834;
unsigned long long int var_5 = 4589323217102792266ULL;
unsigned int var_6 = 3727260303U;
unsigned long long int var_8 = 5230055233559701063ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -384530685;
int zero = 0;
unsigned short var_13 = (unsigned short)32804;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)19954;
signed char var_16 = (signed char)79;
unsigned long long int var_17 = 9112652926432144417ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)62098;
int var_20 = 2051032651;
unsigned short var_21 = (unsigned short)59290;
int var_22 = 261150766;
unsigned long long int var_23 = 13085520026183991727ULL;
unsigned long long int var_24 = 36282193931265384ULL;
signed char var_25 = (signed char)31;
signed char var_26 = (signed char)-108;
unsigned short var_27 = (unsigned short)34475;
signed char arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned int arr_4 [21] [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned char arr_6 [21] ;
signed char arr_7 [24] ;
unsigned char arr_21 [21] [21] ;
_Bool arr_25 [21] [21] [21] [21] [21] [21] ;
long long int arr_2 [21] ;
unsigned char arr_15 [20] [20] ;
unsigned int arr_16 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)14364;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 2644445008U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 3604995883005871913ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)236 : (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3542931112366487098LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 1993442867U;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
