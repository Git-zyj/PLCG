#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)50;
unsigned int var_8 = 1578942495U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 17638668932423751486ULL;
signed char var_14 = (signed char)78;
int zero = 0;
long long int var_16 = 6658582422844864744LL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5601115654031049370LL;
int var_19 = 1888088339;
unsigned int var_20 = 3503256034U;
unsigned short arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)57797;
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
