#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
long long int var_2 = 7459031228657053130LL;
unsigned long long int var_3 = 9863292667816487268ULL;
long long int var_8 = 195468322895082101LL;
unsigned int var_9 = 4206978544U;
int zero = 0;
unsigned long long int var_10 = 10057779648062991694ULL;
int var_11 = -1399931399;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
