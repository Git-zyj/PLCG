#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3802;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)46069;
signed char var_5 = (signed char)-16;
int zero = 0;
signed char var_10 = (signed char)18;
short var_11 = (short)-5918;
int var_12 = 1012733677;
unsigned long long int var_13 = 16754752942696832031ULL;
unsigned long long int var_14 = 12914816318744438250ULL;
long long int arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 6421597512749519247LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)27780;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
