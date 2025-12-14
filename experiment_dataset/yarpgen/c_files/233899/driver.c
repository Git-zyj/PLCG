#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -915358578295908590LL;
unsigned long long int var_1 = 5898116104617895877ULL;
long long int var_3 = 2393846921778247642LL;
unsigned int var_6 = 3061039421U;
long long int var_8 = -3669282314347919898LL;
long long int var_9 = -7916122180594122588LL;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3019693980U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)25555;
unsigned long long int var_19 = 14694887058003242458ULL;
unsigned short var_20 = (unsigned short)37393;
_Bool var_21 = (_Bool)0;
unsigned int arr_2 [15] ;
unsigned int arr_4 [15] ;
short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 952890999U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 949811162U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-21830;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
