#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7542280226801297417LL;
long long int var_1 = -5541785322700508540LL;
long long int var_4 = 6781608655439186588LL;
long long int var_9 = 6587135179462413515LL;
int var_11 = -1092890828;
int zero = 0;
long long int var_14 = 3669528228931356587LL;
long long int var_15 = 2464727244796845010LL;
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
