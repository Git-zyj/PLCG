#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)5765;
signed char var_9 = (signed char)-92;
unsigned short var_17 = (unsigned short)20998;
int zero = 0;
unsigned long long int var_18 = 11273450586688660929ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2024944007U;
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
