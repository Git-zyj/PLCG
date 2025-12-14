#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3021704575U;
long long int var_1 = -1848718235304984238LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1728232998U;
int var_4 = -1686007521;
unsigned int var_5 = 3663342996U;
unsigned int var_6 = 598720988U;
unsigned int var_8 = 3340020502U;
unsigned short var_9 = (unsigned short)25894;
int zero = 0;
unsigned short var_11 = (unsigned short)20985;
_Bool var_12 = (_Bool)1;
short arr_3 [12] [12] [12] ;
int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)30172;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1071157949 : -927878839;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
