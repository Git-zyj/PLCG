#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-38;
unsigned short var_3 = (unsigned short)20785;
int var_4 = -1105146225;
int var_9 = 714155365;
int zero = 0;
signed char var_10 = (signed char)-19;
int var_11 = -1886919839;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
