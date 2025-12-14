#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 478961683242771511ULL;
signed char var_17 = (signed char)-74;
int zero = 0;
unsigned short var_18 = (unsigned short)50826;
unsigned long long int var_19 = 16187009261016286589ULL;
unsigned short var_20 = (unsigned short)7027;
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
