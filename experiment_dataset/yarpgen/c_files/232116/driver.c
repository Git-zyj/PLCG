#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4335869719012224687ULL;
long long int var_6 = 1165913713287096064LL;
short var_9 = (short)27988;
unsigned int var_10 = 3506137294U;
int zero = 0;
unsigned short var_15 = (unsigned short)55547;
signed char var_16 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
