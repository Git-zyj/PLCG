#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 617827023;
long long int var_4 = 7396610352229986686LL;
int var_9 = 619453467;
unsigned char var_10 = (unsigned char)114;
int zero = 0;
signed char var_11 = (signed char)92;
int var_12 = 1692001547;
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
