#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5960179219523449840LL;
unsigned short var_10 = (unsigned short)41397;
unsigned long long int var_14 = 4995216519107432774ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)49562;
unsigned char var_16 = (unsigned char)222;
unsigned long long int var_17 = 4521622190867536037ULL;
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
