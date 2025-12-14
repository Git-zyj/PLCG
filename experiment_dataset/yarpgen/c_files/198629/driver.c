#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1736612011;
unsigned long long int var_1 = 2844258088356371635ULL;
signed char var_6 = (signed char)109;
short var_8 = (short)4062;
int zero = 0;
short var_19 = (short)29399;
signed char var_20 = (signed char)108;
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
