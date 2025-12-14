#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14682555345209647532ULL;
long long int var_1 = -6086279999549672957LL;
unsigned int var_2 = 2576010178U;
_Bool var_6 = (_Bool)0;
long long int var_7 = 4824393232428589703LL;
signed char var_9 = (signed char)14;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)25647;
unsigned short var_13 = (unsigned short)981;
long long int var_14 = 8982574880040753065LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-126;
unsigned short var_17 = (unsigned short)39793;
_Bool arr_0 [18] ;
unsigned int arr_3 [18] [18] [18] ;
unsigned long long int arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 114191789U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 3910102822904563974ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
