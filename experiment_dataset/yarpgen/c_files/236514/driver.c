#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
short var_2 = (short)-32340;
unsigned long long int var_6 = 13288960018203352050ULL;
unsigned long long int var_8 = 7516339186899907202ULL;
unsigned int var_11 = 2166400283U;
unsigned int var_17 = 1992618571U;
int zero = 0;
unsigned short var_18 = (unsigned short)23888;
unsigned short var_19 = (unsigned short)11644;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7685481214873985523LL;
signed char var_22 = (signed char)-15;
unsigned char var_23 = (unsigned char)96;
unsigned long long int var_24 = 13137171091884720249ULL;
int var_25 = -1202368385;
signed char arr_0 [18] [18] ;
short arr_1 [18] [18] ;
int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-3459;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1831440502;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
