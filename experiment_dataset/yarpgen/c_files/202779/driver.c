#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -77662899;
unsigned long long int var_9 = 3713323183668033016ULL;
int var_16 = -1540877730;
int zero = 0;
unsigned int var_19 = 1738726616U;
int var_20 = -1250709465;
long long int var_21 = -8772614559205210652LL;
unsigned long long int var_22 = 16574027272640799264ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
