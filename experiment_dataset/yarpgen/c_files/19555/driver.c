#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3376641181U;
unsigned int var_7 = 1225657826U;
short var_12 = (short)31235;
int zero = 0;
long long int var_13 = -4783375214328917907LL;
int var_14 = -663389079;
unsigned int var_15 = 3946778673U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1581274385U;
_Bool arr_0 [21] ;
_Bool arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
