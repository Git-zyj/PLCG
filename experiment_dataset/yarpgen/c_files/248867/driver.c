#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3659511193627815382LL;
_Bool var_6 = (_Bool)1;
long long int var_9 = 2786833919613662657LL;
int zero = 0;
long long int var_10 = 1389133385949543630LL;
long long int var_11 = -2350605614922648385LL;
unsigned int var_12 = 1228176846U;
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
