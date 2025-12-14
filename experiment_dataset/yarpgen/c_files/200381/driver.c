#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 653443989;
int var_3 = -1786805237;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 14210418247795119448ULL;
unsigned int var_6 = 1578476568U;
unsigned long long int var_7 = 17531381647334753778ULL;
unsigned long long int var_9 = 12759771845068012907ULL;
int zero = 0;
unsigned int var_11 = 3417915895U;
int var_12 = -986945978;
int var_13 = -866669943;
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
