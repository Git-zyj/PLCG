#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1808469354;
long long int var_1 = -500116405810038390LL;
int var_4 = 26312438;
signed char var_5 = (signed char)13;
int zero = 0;
unsigned char var_10 = (unsigned char)190;
unsigned int var_11 = 1939686717U;
short var_12 = (short)-11163;
unsigned int var_13 = 1687262763U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
