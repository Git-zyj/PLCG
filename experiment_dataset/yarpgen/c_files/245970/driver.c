#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3143347451223426385LL;
short var_1 = (short)-31883;
long long int var_2 = 68483193717483691LL;
long long int var_4 = 8187147253542992840LL;
unsigned char var_9 = (unsigned char)24;
int zero = 0;
unsigned long long int var_14 = 372509306904700836ULL;
unsigned int var_15 = 917962557U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
