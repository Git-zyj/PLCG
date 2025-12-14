#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15581745854676457903ULL;
unsigned long long int var_3 = 5327953779016629061ULL;
unsigned long long int var_5 = 17801504168595435192ULL;
unsigned long long int var_7 = 6279716395992704382ULL;
unsigned long long int var_9 = 16033230998680027569ULL;
int zero = 0;
unsigned long long int var_12 = 17640273945700037338ULL;
unsigned long long int var_13 = 9800356779003133001ULL;
unsigned long long int var_14 = 11212753841166729674ULL;
unsigned long long int var_15 = 15534676262443651822ULL;
unsigned long long int var_16 = 4776683741345004447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
