#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16503;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)121;
short var_7 = (short)29187;
unsigned short var_11 = (unsigned short)36280;
int zero = 0;
unsigned long long int var_15 = 1301382400802360632ULL;
signed char var_16 = (signed char)-18;
short var_17 = (short)12582;
signed char var_18 = (signed char)105;
int var_19 = 1858258299;
int var_20 = 1197949667;
signed char var_21 = (signed char)-11;
unsigned short var_22 = (unsigned short)50673;
unsigned long long int arr_0 [21] ;
unsigned short arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 6702580209029782240ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)31979;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
