#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2794156232U;
unsigned int var_15 = 2641918186U;
short var_19 = (short)3313;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 5679228497932182510ULL;
unsigned short var_22 = (unsigned short)20319;
unsigned long long int var_23 = 17265152732769192553ULL;
unsigned int var_24 = 1154714335U;
signed char var_25 = (signed char)100;
unsigned long long int arr_0 [10] ;
int arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4738125355772901745ULL : 17488127827348064684ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -291080707;
}

void checksum() {
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
