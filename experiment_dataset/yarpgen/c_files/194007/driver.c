#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3238257206U;
long long int var_7 = -2470473842794364284LL;
long long int var_8 = 2997434628482808278LL;
int zero = 0;
long long int var_17 = 981427486707260116LL;
signed char var_18 = (signed char)119;
unsigned int var_19 = 1169161020U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
