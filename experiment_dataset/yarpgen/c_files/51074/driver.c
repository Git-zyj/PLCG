#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)124;
int var_9 = 1507669416;
unsigned long long int var_15 = 1188562294906768040ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)7735;
long long int var_21 = 4751487221151486396LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
