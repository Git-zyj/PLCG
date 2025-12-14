#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)33;
int var_3 = -1398802959;
signed char var_8 = (signed char)-26;
int zero = 0;
unsigned char var_10 = (unsigned char)110;
unsigned long long int var_11 = 9127072673243523130ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 11138497941079044121ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 9134911007120963745ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
