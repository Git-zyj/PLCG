#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8856320569450485193LL;
unsigned int var_2 = 1980107048U;
unsigned long long int var_7 = 4050406018547000940ULL;
unsigned int var_11 = 424234359U;
int zero = 0;
unsigned long long int var_14 = 3229640260720830579ULL;
unsigned long long int var_15 = 12948906038788048290ULL;
unsigned long long int var_16 = 6122804425670485011ULL;
void init() {
}

void checksum() {
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
