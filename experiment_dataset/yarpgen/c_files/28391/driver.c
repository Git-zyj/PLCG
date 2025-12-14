#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5631879462431534620LL;
unsigned long long int var_6 = 10652813600470417390ULL;
long long int var_15 = 2096367732850866760LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1424191965U;
unsigned int var_19 = 4168967076U;
int zero = 0;
unsigned int var_20 = 257453782U;
unsigned long long int var_21 = 2164076016958379582ULL;
unsigned long long int var_22 = 14584306233049167476ULL;
signed char var_23 = (signed char)21;
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
