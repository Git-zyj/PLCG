#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5645925872608385829LL;
long long int var_4 = 4326401439019603876LL;
signed char var_7 = (signed char)76;
unsigned long long int var_8 = 15268436927666879185ULL;
unsigned long long int var_9 = 8300133756946449739ULL;
int zero = 0;
short var_10 = (short)7468;
unsigned long long int var_11 = 14036570022416436843ULL;
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
