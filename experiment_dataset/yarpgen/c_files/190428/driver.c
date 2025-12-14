#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)23130;
int var_7 = 1575439720;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3972557989U;
unsigned short var_12 = (unsigned short)4688;
signed char var_15 = (signed char)-125;
int zero = 0;
unsigned int var_17 = 4166311264U;
signed char var_18 = (signed char)-63;
int var_19 = -2033373098;
unsigned short arr_0 [20] [20] ;
long long int arr_1 [20] [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)51570;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 5613134501311207506LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
