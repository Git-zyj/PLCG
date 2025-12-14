#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5418675891136945593LL;
unsigned short var_7 = (unsigned short)29766;
int zero = 0;
unsigned long long int var_12 = 12421848024931556195ULL;
unsigned long long int var_13 = 12724317356421124334ULL;
void init() {
}

void checksum() {
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
