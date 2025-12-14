#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 856276043006018491LL;
unsigned long long int var_5 = 6216725024270394476ULL;
int zero = 0;
unsigned int var_11 = 427188517U;
long long int var_12 = 6934847840331133920LL;
unsigned int var_13 = 2053188423U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
