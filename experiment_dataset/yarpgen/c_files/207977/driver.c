#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned int var_12 = 1120583606U;
unsigned int var_14 = 393223379U;
unsigned long long int var_15 = 11720275132103364825ULL;
unsigned long long int var_17 = 3302133686192965373ULL;
int zero = 0;
unsigned long long int var_18 = 8402042999964767360ULL;
unsigned long long int var_19 = 10294252908054456295ULL;
void init() {
}

void checksum() {
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
