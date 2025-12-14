#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)71;
short var_4 = (short)12753;
int var_5 = -1658229924;
unsigned char var_8 = (unsigned char)124;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3306789421U;
signed char var_14 = (signed char)-95;
signed char var_16 = (signed char)-30;
int zero = 0;
unsigned int var_20 = 4072420966U;
unsigned long long int arr_0 [21] ;
int arr_4 [21] ;
unsigned long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 9365848711026240640ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -271977138;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 4596101697248283079ULL;
}

void checksum() {
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
