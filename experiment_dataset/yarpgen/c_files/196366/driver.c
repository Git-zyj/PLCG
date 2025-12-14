#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
signed char var_1 = (signed char)-1;
long long int var_6 = 8940045822707253995LL;
unsigned char var_8 = (unsigned char)4;
int var_10 = 369695199;
int zero = 0;
unsigned char var_14 = (unsigned char)139;
unsigned long long int var_15 = 11642618275672710589ULL;
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
