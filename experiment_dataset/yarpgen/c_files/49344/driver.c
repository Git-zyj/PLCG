#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)31924;
unsigned short var_11 = (unsigned short)15448;
signed char var_13 = (signed char)75;
long long int var_14 = 1413310282941316025LL;
_Bool var_17 = (_Bool)0;
int var_18 = 640597517;
int zero = 0;
long long int var_19 = -1677629916831845200LL;
unsigned int var_20 = 289256247U;
short var_21 = (short)1774;
int var_22 = 1781719329;
unsigned long long int var_23 = 11160681682620219838ULL;
short var_24 = (short)14161;
long long int var_25 = -1512958112721719597LL;
signed char arr_0 [25] [25] ;
unsigned int arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 332084628U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
