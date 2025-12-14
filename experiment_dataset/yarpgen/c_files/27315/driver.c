#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-121;
signed char var_8 = (signed char)107;
unsigned long long int var_13 = 7142790619349485931ULL;
long long int var_18 = -3433147586733368963LL;
int zero = 0;
unsigned short var_19 = (unsigned short)902;
short var_20 = (short)-22351;
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
