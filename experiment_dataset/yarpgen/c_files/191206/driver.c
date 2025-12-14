#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5506375835466462399LL;
short var_1 = (short)-10325;
signed char var_3 = (signed char)95;
signed char var_4 = (signed char)34;
int zero = 0;
long long int var_10 = 4943083060141756898LL;
unsigned long long int var_11 = 16374176622476509639ULL;
signed char var_12 = (signed char)38;
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
