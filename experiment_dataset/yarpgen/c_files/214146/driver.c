#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -360202341238852740LL;
unsigned long long int var_5 = 2397282831627697816ULL;
unsigned long long int var_6 = 10915823332425838809ULL;
unsigned int var_7 = 1020248652U;
unsigned char var_12 = (unsigned char)221;
short var_13 = (short)-1136;
int zero = 0;
int var_14 = -1414120994;
short var_15 = (short)-6679;
long long int var_16 = 6355257081011614734LL;
signed char var_17 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
