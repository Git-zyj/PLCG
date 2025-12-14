#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10054424125045000387ULL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)5;
int zero = 0;
short var_10 = (short)25253;
short var_11 = (short)8521;
unsigned long long int var_12 = 18096243880077731705ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
