#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
unsigned long long int var_5 = 13166126043401544627ULL;
long long int var_7 = -5819599095288842192LL;
int zero = 0;
short var_11 = (short)-2454;
unsigned long long int var_12 = 9294170940589137110ULL;
long long int var_13 = 702990129244263683LL;
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
