#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17697005506749848866ULL;
long long int var_8 = -6359833181266692754LL;
int var_12 = -1657840408;
int zero = 0;
long long int var_13 = -3808629408584581450LL;
long long int var_14 = -106282377717251145LL;
void init() {
}

void checksum() {
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
