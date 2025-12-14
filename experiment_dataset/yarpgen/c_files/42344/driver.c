#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14868;
int var_1 = 908380493;
unsigned int var_3 = 3203900111U;
short var_4 = (short)-20522;
unsigned long long int var_5 = 4533504756636638469ULL;
long long int var_6 = -6764131380480787611LL;
signed char var_7 = (signed char)-110;
unsigned int var_12 = 2969296241U;
unsigned char var_14 = (unsigned char)32;
unsigned long long int var_16 = 11395590307461937412ULL;
long long int var_17 = 218677043398980338LL;
int zero = 0;
long long int var_19 = -3901612126257296343LL;
long long int var_20 = -3711368684259014437LL;
unsigned char var_21 = (unsigned char)39;
unsigned int var_22 = 3442148182U;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 9388291600851505734ULL;
unsigned long long int arr_1 [17] [17] ;
int arr_4 [17] [17] [17] ;
unsigned char arr_7 [24] [24] ;
long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 12998256204155942904ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 408107640;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 3192929927486273525LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
