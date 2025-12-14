#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -62321330740791020LL;
long long int var_2 = 128714399210214910LL;
long long int var_7 = -5522691432095926195LL;
long long int var_9 = 6698553681134225534LL;
long long int var_10 = 3163276294563933078LL;
int zero = 0;
long long int var_12 = 1863481934382815315LL;
long long int var_13 = 3718451192784179171LL;
long long int var_14 = 8315440690475597839LL;
void init() {
}

void checksum() {
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
