#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16098066064962252128ULL;
signed char var_3 = (signed char)58;
unsigned long long int var_8 = 6862778293471396632ULL;
int zero = 0;
signed char var_11 = (signed char)27;
unsigned long long int var_12 = 13548404827141738414ULL;
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
