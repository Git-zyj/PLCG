#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned int var_4 = 34002765U;
int var_5 = 875419209;
int var_7 = 1497459001;
int var_10 = 1307233271;
long long int var_14 = -2067491390751271458LL;
unsigned int var_15 = 3083837075U;
int zero = 0;
signed char var_18 = (signed char)-91;
unsigned int var_19 = 2686351642U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
