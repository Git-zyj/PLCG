#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20593;
unsigned long long int var_3 = 13008787989958317228ULL;
int var_8 = -1446253487;
int zero = 0;
signed char var_12 = (signed char)28;
unsigned long long int var_13 = 10023543551283517314ULL;
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
