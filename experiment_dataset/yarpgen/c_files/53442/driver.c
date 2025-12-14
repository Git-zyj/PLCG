#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7328466858380466211LL;
long long int var_1 = -6809516542906847732LL;
short var_9 = (short)28219;
int zero = 0;
long long int var_14 = -60586731684030521LL;
unsigned long long int var_15 = 13766629404017634594ULL;
unsigned long long int var_16 = 2202894584093308190ULL;
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
