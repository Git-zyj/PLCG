#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5571139598839074671LL;
unsigned short var_7 = (unsigned short)38359;
unsigned long long int var_11 = 1798414202173137411ULL;
int zero = 0;
short var_14 = (short)-22630;
long long int var_15 = -4647427682807596705LL;
unsigned short var_16 = (unsigned short)50997;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
