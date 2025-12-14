#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
signed char var_1 = (signed char)80;
long long int var_3 = -5762919477146300633LL;
long long int var_4 = 6669538990756093046LL;
long long int var_6 = -9097523194715856091LL;
signed char var_7 = (signed char)-108;
signed char var_8 = (signed char)-124;
signed char var_9 = (signed char)83;
unsigned long long int var_10 = 1671623818956778255ULL;
signed char var_13 = (signed char)5;
int zero = 0;
long long int var_14 = 5414492123044648825LL;
long long int var_15 = 7854815772479974284LL;
unsigned long long int var_16 = 17122642948029524852ULL;
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
