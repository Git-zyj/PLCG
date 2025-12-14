#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1361;
unsigned short var_5 = (unsigned short)57016;
unsigned long long int var_9 = 5154442913341551832ULL;
int zero = 0;
unsigned int var_17 = 1614413609U;
long long int var_18 = -4732636420068711787LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
