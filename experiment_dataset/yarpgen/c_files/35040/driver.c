#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 18156836806443145969ULL;
unsigned int var_6 = 3745857796U;
unsigned char var_7 = (unsigned char)34;
short var_8 = (short)20004;
short var_9 = (short)9287;
int zero = 0;
int var_11 = -196905594;
signed char var_12 = (signed char)103;
unsigned long long int var_13 = 2037468623815766671ULL;
int var_14 = 705146631;
long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 5399330423273487373LL;
}

void checksum() {
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
