#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1970665559U;
long long int var_6 = -3018169523197885975LL;
unsigned int var_7 = 3545039275U;
unsigned int var_9 = 1238479926U;
int zero = 0;
unsigned int var_18 = 2628568720U;
long long int var_19 = 2584528677240127666LL;
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
