#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned char var_11 = (unsigned char)149;
unsigned int var_12 = 1914873043U;
long long int var_17 = 6107190847768876407LL;
int zero = 0;
unsigned char var_19 = (unsigned char)193;
long long int var_20 = -8264633887035229157LL;
unsigned char var_21 = (unsigned char)54;
long long int var_22 = -367326775624148198LL;
unsigned short var_23 = (unsigned short)47144;
long long int var_24 = -1708210446863297156LL;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33986 : (unsigned short)45773;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
