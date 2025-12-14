#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -902700494707372041LL;
unsigned char var_7 = (unsigned char)185;
unsigned long long int var_15 = 11594330640400271918ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8713830824325772994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
