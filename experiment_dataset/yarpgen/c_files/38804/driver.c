#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17626791178065529670ULL;
unsigned long long int var_4 = 8186270696642574591ULL;
long long int var_8 = 1764603987981817447LL;
int zero = 0;
long long int var_11 = 4988194542353875922LL;
unsigned long long int var_12 = 12325833975830677191ULL;
void init() {
}

void checksum() {
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
