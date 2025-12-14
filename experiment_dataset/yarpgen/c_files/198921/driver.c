#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4176703000U;
unsigned long long int var_3 = 4669599865576503910ULL;
long long int var_9 = 2233020000176799224LL;
unsigned int var_10 = 56509647U;
int zero = 0;
unsigned int var_12 = 401022342U;
unsigned int var_13 = 2878785038U;
long long int var_14 = -7863120209228399000LL;
void init() {
}

void checksum() {
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
