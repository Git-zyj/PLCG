#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3515748627384368487ULL;
short var_7 = (short)20036;
unsigned short var_8 = (unsigned short)57839;
unsigned int var_9 = 634070846U;
signed char var_11 = (signed char)-37;
int zero = 0;
long long int var_15 = 8048133255835088805LL;
int var_16 = 1509422771;
int var_17 = 1943421563;
void init() {
}

void checksum() {
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
