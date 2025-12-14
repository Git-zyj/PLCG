#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3158495699205334576ULL;
unsigned short var_6 = (unsigned short)14233;
unsigned long long int var_8 = 15410661184770165205ULL;
unsigned long long int var_11 = 5436455213849168584ULL;
signed char var_12 = (signed char)102;
short var_13 = (short)-18570;
unsigned short var_16 = (unsigned short)32257;
int zero = 0;
unsigned short var_17 = (unsigned short)41773;
unsigned int var_18 = 2795884574U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)20410;
unsigned short var_21 = (unsigned short)11374;
unsigned long long int arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
short arr_2 [25] [25] ;
unsigned short arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 8587042070832675474ULL : 16537187522405975407ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 948172885U : 458249911U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-24649;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)31798;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
