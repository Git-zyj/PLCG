#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)40;
unsigned short var_3 = (unsigned short)56815;
long long int var_10 = 3522596143837449623LL;
int zero = 0;
unsigned short var_17 = (unsigned short)20311;
unsigned short var_18 = (unsigned short)48064;
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
