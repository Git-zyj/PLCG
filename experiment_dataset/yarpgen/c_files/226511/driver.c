#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3500978836068745818LL;
long long int var_2 = -5703941445385787267LL;
short var_14 = (short)28713;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)17973;
long long int var_22 = -5654146136234311303LL;
signed char arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-41;
}

void checksum() {
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
