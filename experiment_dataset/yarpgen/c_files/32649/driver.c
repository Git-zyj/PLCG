#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
signed char var_1 = (signed char)-89;
signed char var_3 = (signed char)-111;
signed char var_4 = (signed char)109;
signed char var_6 = (signed char)104;
long long int var_9 = 6912188064242578202LL;
int var_10 = -1046816263;
unsigned int var_11 = 2420682529U;
unsigned long long int var_14 = 4915450776736272262ULL;
short var_15 = (short)-24837;
long long int var_17 = 4365438410293652529LL;
unsigned char var_18 = (unsigned char)116;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1063436716U;
unsigned long long int var_21 = 10107885046919313818ULL;
int var_22 = 1151298883;
short var_23 = (short)-24802;
long long int var_24 = 5506121989111104368LL;
unsigned int arr_1 [21] ;
int arr_2 [21] [21] ;
short arr_4 [21] [21] [21] ;
unsigned short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 3354140912U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 237909053;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-26341;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)18866;
}

void checksum() {
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
