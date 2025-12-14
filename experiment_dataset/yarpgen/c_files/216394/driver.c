#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11772957245938569424ULL;
signed char var_6 = (signed char)51;
unsigned int var_7 = 2837049273U;
short var_14 = (short)13104;
unsigned long long int var_15 = 12776031882855202159ULL;
int zero = 0;
short var_19 = (short)14650;
short var_20 = (short)-9984;
void init() {
}

void checksum() {
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
