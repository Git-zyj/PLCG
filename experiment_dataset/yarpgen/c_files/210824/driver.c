#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7021523184810447976ULL;
unsigned long long int var_1 = 10021172774329805017ULL;
unsigned long long int var_2 = 14863335813772986761ULL;
unsigned long long int var_6 = 7244503846024191663ULL;
unsigned long long int var_7 = 18042828171383558937ULL;
unsigned long long int var_9 = 8691196113614689717ULL;
unsigned long long int var_10 = 14625516906628854804ULL;
int zero = 0;
unsigned long long int var_11 = 15516474502589626569ULL;
unsigned long long int var_12 = 16445261566518912459ULL;
unsigned long long int var_13 = 17492060157550041604ULL;
unsigned long long int var_14 = 7476482721319656592ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
