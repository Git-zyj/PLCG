#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1936546370U;
unsigned long long int var_1 = 16750880206061407300ULL;
long long int var_2 = -4614390954544430193LL;
long long int var_9 = 8849017086393306080LL;
int zero = 0;
long long int var_11 = 8674017412960235769LL;
long long int var_12 = -1868065382949732592LL;
unsigned int var_13 = 477806155U;
unsigned long long int var_14 = 13316626040981891950ULL;
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
