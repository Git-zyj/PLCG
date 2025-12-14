#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2263476190181344846LL;
long long int var_7 = 3702998366268782387LL;
unsigned int var_9 = 4180284344U;
long long int var_14 = -2900061868223008115LL;
int zero = 0;
unsigned int var_16 = 583807156U;
long long int var_17 = 3610098926994072974LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
