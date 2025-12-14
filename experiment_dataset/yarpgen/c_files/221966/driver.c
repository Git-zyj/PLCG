#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2942544043U;
long long int var_3 = -1802939871469213917LL;
int var_9 = 1443850690;
short var_10 = (short)-20189;
int zero = 0;
unsigned long long int var_13 = 530043942286259193ULL;
long long int var_14 = -354733511411427788LL;
signed char var_15 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
