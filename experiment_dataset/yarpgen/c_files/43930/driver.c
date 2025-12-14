#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2144276074;
signed char var_2 = (signed char)88;
unsigned long long int var_9 = 11188082056962796237ULL;
signed char var_11 = (signed char)-23;
long long int var_12 = -8725019161961741309LL;
unsigned char var_16 = (unsigned char)162;
int zero = 0;
long long int var_17 = 4040116489519809593LL;
unsigned long long int var_18 = 15540131211339778219ULL;
signed char var_19 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
