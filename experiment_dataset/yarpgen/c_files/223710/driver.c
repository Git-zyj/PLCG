#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6225970516441939257LL;
unsigned int var_1 = 1222090488U;
unsigned int var_2 = 1743248341U;
unsigned char var_3 = (unsigned char)183;
long long int var_4 = -5697238904962012291LL;
unsigned int var_6 = 3511530255U;
unsigned char var_7 = (unsigned char)198;
int var_8 = -1399815190;
unsigned int var_9 = 923133173U;
long long int var_10 = 2465384115705582787LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)58;
long long int var_13 = 6323438541751687650LL;
unsigned int var_14 = 95374987U;
unsigned char var_15 = (unsigned char)247;
unsigned int arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3748813254U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 388272012U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)170;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
