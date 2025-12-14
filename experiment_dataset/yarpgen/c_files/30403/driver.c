#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2131089489;
unsigned int var_11 = 1958096847U;
long long int var_12 = 8889207085921460867LL;
int zero = 0;
unsigned char var_14 = (unsigned char)243;
long long int var_15 = 845068128145626983LL;
signed char var_16 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
