#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-33;
unsigned long long int var_4 = 10997204531411130845ULL;
unsigned short var_6 = (unsigned short)11827;
unsigned long long int var_10 = 16492451503375222480ULL;
int var_12 = -503842022;
int zero = 0;
unsigned long long int var_14 = 11217040728019900623ULL;
unsigned int var_15 = 1095974946U;
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
