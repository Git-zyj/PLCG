#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6949494756651723302LL;
long long int var_1 = 106079514981173247LL;
long long int var_2 = -6358736302785623872LL;
signed char var_4 = (signed char)-116;
signed char var_5 = (signed char)5;
long long int var_7 = 6348296688000068914LL;
int zero = 0;
long long int var_11 = -8478074058118619303LL;
signed char var_12 = (signed char)-55;
signed char var_13 = (signed char)45;
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
