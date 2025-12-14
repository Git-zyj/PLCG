#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -6205992318545184818LL;
int var_11 = 1956646885;
signed char var_15 = (signed char)-35;
int zero = 0;
unsigned long long int var_17 = 8533311660862869556ULL;
unsigned long long int var_18 = 3293211346904324203ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
