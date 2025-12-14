#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1996242290;
signed char var_4 = (signed char)-13;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 16634330733712619445ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 10022583183639398271ULL;
void init() {
}

void checksum() {
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
