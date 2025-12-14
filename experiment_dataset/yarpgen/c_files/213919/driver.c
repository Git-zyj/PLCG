#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -2328873548290815876LL;
long long int var_10 = -1250233434576144696LL;
long long int var_11 = 1203660444474052031LL;
long long int var_12 = -5949591303105284969LL;
int zero = 0;
long long int var_14 = 2898190739083577318LL;
long long int var_15 = 4169695976316772657LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
