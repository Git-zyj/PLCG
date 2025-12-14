#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8031119459524347613ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)3920;
long long int var_9 = 1863039116759073512LL;
long long int var_10 = -4150264951684901809LL;
signed char var_15 = (signed char)9;
int var_17 = -1963834542;
int zero = 0;
long long int var_20 = 7828283144101359697LL;
signed char var_21 = (signed char)-5;
long long int var_22 = -3763448456441350524LL;
int var_23 = 2124067518;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
