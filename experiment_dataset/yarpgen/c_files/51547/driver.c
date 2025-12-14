#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3296682303670623380ULL;
unsigned int var_1 = 1596021470U;
unsigned long long int var_5 = 18152200038046520308ULL;
unsigned short var_9 = (unsigned short)51072;
int zero = 0;
unsigned short var_12 = (unsigned short)6745;
short var_13 = (short)21070;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
