#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2614085739U;
unsigned int var_3 = 2205609686U;
long long int var_4 = -652805094458595940LL;
long long int var_7 = -6963631913290254981LL;
int zero = 0;
signed char var_14 = (signed char)32;
unsigned long long int var_15 = 1435367628151090978ULL;
long long int var_16 = -1474263887461303613LL;
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
