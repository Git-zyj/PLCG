#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_12 = -335739528;
unsigned int var_13 = 1748709318U;
long long int var_16 = -8627729057085735620LL;
int zero = 0;
unsigned int var_18 = 3629484625U;
unsigned char var_19 = (unsigned char)161;
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
