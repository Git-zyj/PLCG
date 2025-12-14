#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 106537662U;
signed char var_1 = (signed char)-85;
short var_3 = (short)-857;
unsigned short var_4 = (unsigned short)9604;
int var_11 = 1386821129;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)38771;
signed char var_16 = (signed char)58;
unsigned short var_17 = (unsigned short)35187;
unsigned int var_18 = 2276798945U;
unsigned long long int arr_0 [17] [17] ;
short arr_2 [17] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3203008517504868950ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-16362;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 16616746606347047539ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
