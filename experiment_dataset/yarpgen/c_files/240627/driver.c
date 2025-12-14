#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6109621356505287770LL;
long long int var_6 = 4319354063816508354LL;
int zero = 0;
long long int var_11 = 235095118664359779LL;
long long int var_12 = 2390762745715705849LL;
long long int var_13 = -6551212679854166949LL;
long long int var_14 = 6927865212916135894LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
