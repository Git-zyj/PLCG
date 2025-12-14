#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1740250071433890662ULL;
unsigned long long int var_4 = 12648697594756189460ULL;
int var_12 = 1685050225;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3474703036U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
