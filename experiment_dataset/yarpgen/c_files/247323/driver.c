#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 657285557519292342ULL;
short var_14 = (short)-5621;
unsigned long long int var_15 = 6147306448161624855ULL;
int zero = 0;
unsigned int var_18 = 3107991133U;
unsigned char var_19 = (unsigned char)207;
long long int var_20 = 1302480826669332986LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
