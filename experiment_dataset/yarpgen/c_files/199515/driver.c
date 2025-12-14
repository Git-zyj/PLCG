#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 217637507;
long long int var_8 = 4506589921777324582LL;
signed char var_11 = (signed char)101;
signed char var_13 = (signed char)55;
int zero = 0;
signed char var_16 = (signed char)77;
unsigned int var_17 = 1389683549U;
short var_18 = (short)21524;
long long int var_19 = -8484837059113233791LL;
signed char var_20 = (signed char)52;
short arr_0 [19] ;
unsigned long long int arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-13876;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 4722076575495829693ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
