#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)3311;
_Bool var_11 = (_Bool)1;
unsigned int var_16 = 14657490U;
long long int var_17 = -306575936229199337LL;
unsigned long long int var_18 = 3624358825407534152ULL;
int zero = 0;
long long int var_20 = -4195139313544835015LL;
int var_21 = 1666075322;
int var_22 = 478311366;
void init() {
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
